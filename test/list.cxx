# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2011) */
#
# /* See http://www.boost.org for most recent version. */
#
# include <boost/preprocessor/arithmetic/add.hpp>
# include <boost/preprocessor/arithmetic/sub.hpp>
# include <boost/preprocessor/comparison/equal.hpp>
# include <boost/preprocessor/comparison/less.hpp>
# include <boost/preprocessor/control/iif.hpp>
# include <boost/preprocessor/facilities/is_empty.hpp>
# include <boost/preprocessor/list.hpp>
# include <boost/preprocessor/tuple/elem.hpp>
# include <boost/preprocessor/tuple/size.hpp>
# include <boost/preprocessor/array/elem.hpp>
# include <boost/preprocessor/array/size.hpp>
# include <boost/preprocessor/seq/elem.hpp>
# include <boost/preprocessor/seq/size.hpp>
# include <boost/preprocessor/variadic/elem.hpp>
# include <libs/preprocessor/test/test.h>

# define LISTNIL BOOST_PP_NIL
# define LIST (4, (1, (5, (2, BOOST_PP_NIL))))
# define REVERSAL(d, x, y) BOOST_PP_SUB_D(d, y, x)
# define F1(r, state, x) + x + state
# define FI2(r, state, i, x) BOOST_PP_IIF(BOOST_PP_EQUAL(i,1),+ x + x + state,+ x + state)
# define F2(r, x) + BOOST_PP_TUPLE_ELEM(2, 0, x) + 2 - BOOST_PP_TUPLE_ELEM(2, 1, x)
# define L1 (0, (x, BOOST_PP_NIL))
# define L2 (a, (1, (b, (2, BOOST_PP_NIL))))
# define L3 (c, (3, (d, BOOST_PP_NIL)))
# define LL (L1, (L2, (L3, BOOST_PP_NIL)))

# if BOOST_PP_LIMIT_MAG == 512

# define LIST_512 \
    (1,(2,(3,(4,(5,(6,(7,(8,(9, \
    (10,(11,(12,(13,(14,(15,(16,(17,(18,(19, \
    (20,(21,(22,(23,(24,(25,(26,(27,(28,(29, \
    (30,(31,(32,(33,(34,(35,(36,(37,(38,(39, \
    (40,(41,(42,(43,(44,(45,(46,(47,(48,(49, \
    (50,(51,(52,(53,(54,(55,(56,(57,(58,(59, \
    (60,(61,(62,(63,(64,(65,(66,(67,(68,(69, \
    (70,(71,(72,(73,(74,(75,(76,(77,(78,(79, \
    (80,(81,(82,(83,(84,(85,(86,(87,(88,(89, \
    (90,(91,(92,(93,(94,(95,(96,(97,(98,(99, \
    (100,(101,(102,(103,(104,(105,(106,(107,(108,(109, \
    (110,(111,(112,(113,(114,(115,(116,(117,(118,(119, \
    (120,(121,(122,(123,(124,(125,(126,(127,(128,(129, \
    (130,(131,(132,(133,(134,(135,(136,(137,(138,(139, \
    (140,(141,(142,(143,(144,(145,(146,(147,(148,(149, \
    (150,(151,(152,(153,(154,(155,(156,(157,(158,(159, \
    (160,(161,(162,(163,(164,(165,(166,(167,(168,(169, \
    (170,(171,(172,(173,(174,(175,(176,(177,(178,(179, \
    (180,(181,(182,(183,(184,(185,(186,(187,(188,(189, \
    (190,(191,(192,(193,(194,(195,(196,(197,(198,(199, \
    (200,(201,(202,(203,(204,(205,(206,(207,(208,(209, \
    (210,(211,(212,(213,(214,(215,(216,(217,(218,(219, \
    (220,(221,(222,(223,(224,(225,(226,(227,(228,(229, \
    (230,(231,(232,(233,(234,(235,(236,(237,(238,(239, \
    (240,(241,(242,(243,(244,(245,(246,(247,(248,(249, \
    (250,(251,(252,(253,(254,(255,(256,(257,(258,(259, \
    (260,(261,(262,(263,(264,(265,(266,(267,(268,(269, \
    (270,(271,(272,(273,(274,(275,(276,(277,(278,(279, \
    (280,(281,(282,(283,(284,(285,(286,(287,(288,(289, \
    (290,(291,(292,(293,(294,(295,(296,(297,(298,(299, \
    (300,(301,(302,(303,(304,(305,(306,(307,(308,(309, \
    (310,(311,(312,(313,(314,(315,(316,(317,(318,(319, \
    (320,(321,(322,(323,(324,(325,(326,(327,(328,(329, \
    (330,(331,(332,(333,(334,(335,(336,(337,(338,(339, \
    (340,(341,(342,(343,(344,(345,(346,(347,(348,(349, \
    (350,(351,(352,(353,(354,(355,(356,(357,(358,(359, \
    (360,(361,(362,(363,(364,(365,(366,(367,(368,(369, \
    (370,(371,(372,(373,(374,(375,(376,(377,(378,(379, \
    (380,(381,(382,(383,(384,(385,(386,(387,(388,(389, \
    (390,(391,(392,(393,(394,(395,(396,(397,(398,(399, \
    (400,(401,(402,(403,(404,(405,(406,(407,(408,(409, \
    (410,(411,(412,(413,(414,(415,(416,(417,(418,(419, \
    (420,(421,(422,(423,(424,(425,(426,(427,(428,(429, \
    (430,(431,(432,(433,(434,(435,(436,(437,(438,(439, \
    (440,(441,(442,(443,(444,(445,(446,(447,(448,(449, \
    (450,(451,(452,(453,(454,(455,(456,(457,(458,(459, \
    (460,(461,(462,(463,(464,(465,(466,(467,(468,(469, \
    (470,(471,(472,(473,(474,(475,(476,(477,(478,(479, \
    (480,(481,(482,(483,(484,(485,(486,(487,(488,(489, \
    (490,(491,(492,(493,(494,(495,(496,(497,(498,(499, \
    (500,(501,(502,(503,(504,(505,(506,(507,(508,(509, \
    (510,(511,(512, BOOST_PP_NIL \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    )))))))))))))))))))))))))))))))) \
    ))))))))))))))))))))))))))))))))
    
#endif

BEGIN BOOST_PP_LIST_FIRST(LIST) == 4 END
BEGIN BOOST_PP_LIST_IS_CONS(LIST) == 1 END
BEGIN BOOST_PP_LIST_IS_CONS(LISTNIL) == 0 END
BEGIN BOOST_PP_LIST_IS_NIL(LIST) == 0 END
BEGIN BOOST_PP_LIST_IS_NIL(LISTNIL) == 1 END

# if BOOST_PP_LIMIT_MAG == 512

BEGIN BOOST_PP_LIST_FIRST(LIST_512) == 1 END
BEGIN BOOST_PP_LIST_IS_CONS(LIST_512) == 1 END
BEGIN BOOST_PP_LIST_IS_NIL(LIST_512) == 0 END

#endif

#if BOOST_PP_VARIADICS

BEGIN BOOST_PP_VARIADIC_ELEM(2,BOOST_PP_LIST_ENUM(LIST)) == 5 END

#endif

BEGIN BOOST_PP_LIST_FOLD_LEFT(BOOST_PP_SUB_D, 22, LIST) == 10 END
BEGIN BOOST_PP_LIST_FOLD_LEFT(BOOST_PP_SUB_D, 22, LISTNIL) == 22 END
BEGIN BOOST_PP_LIST_FOLD_RIGHT(BOOST_PP_ADD_D, 0, LIST) == 12 END
BEGIN BOOST_PP_LIST_FOLD_RIGHT(BOOST_PP_ADD_D, 0, LISTNIL) == 0 END
BEGIN BOOST_PP_LIST_FOLD_RIGHT(REVERSAL, 0, LIST) == 4 END

BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_REVERSE(LIST)) == 2514 END
BEGIN BOOST_PP_LIST_IS_NIL(BOOST_PP_LIST_REVERSE(LISTNIL)) == 1 END

# if BOOST_PP_LIMIT_MAG == 512

BEGIN BOOST_PP_LIST_AT(BOOST_PP_LIST_REVERSE(LIST_512),493) == 19 END

#endif

BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_REST_N(2, LIST)) == 52 END
BEGIN BOOST_PP_LIST_IS_NIL(BOOST_PP_LIST_REST_N(0, LISTNIL)) == 1 END
BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_FIRST_N(2, LIST)) == 41 END

# if BOOST_PP_LIMIT_MAG == 512

BEGIN BOOST_PP_LIST_AT(BOOST_PP_LIST_FIRST_N(357, LIST_512),291) == 292 END
BEGIN BOOST_PP_LIST_SIZE(BOOST_PP_LIST_REST_N(411, LIST_512)) == 101 END

#endif

BEGIN BOOST_PP_LIST_AT(LIST, 2) == 5 END
BEGIN BOOST_PP_LIST_SIZE(LIST) == 4 END
BEGIN BOOST_PP_LIST_SIZE(LISTNIL) == 0 END

# if BOOST_PP_LIMIT_MAG == 512

BEGIN BOOST_PP_LIST_AT(LIST_512, 279) == 280 END
BEGIN BOOST_PP_LIST_SIZE(LIST_512) == 512 END

#endif

BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_TRANSFORM(BOOST_PP_ADD_D, 2, LIST)) == 6374 END
BEGIN BOOST_PP_LIST_IS_NIL(BOOST_PP_LIST_TRANSFORM(BOOST_PP_ADD_D, 2, LISTNIL)) == 1 END

# if BOOST_PP_LIMIT_MAG == 512

#define BOOST_PP_LIST_TEST_TRANSFORM_OP(d, data, elem) BOOST_PP_EQUAL(elem,data)

BEGIN BOOST_PP_LIST_AT(BOOST_PP_LIST_TRANSFORM(BOOST_PP_LIST_TEST_TRANSFORM_OP, 472, LIST_512),471) == 1 END

#endif

BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_APPEND(BOOST_PP_LIST_REST(LIST), LIST)) == 1524152 END
BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_APPEND(LIST,LISTNIL)) == 4152 END
BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_APPEND(LISTNIL,LIST)) == 4152 END
BEGIN BOOST_PP_LIST_IS_NIL(BOOST_PP_LIST_APPEND(LISTNIL,LISTNIL)) == 1 END

BEGIN BOOST_PP_LIST_FOR_EACH(F1, 1, LIST) == 16 END
BEGIN BOOST_PP_LIST_FOR_EACH_I(FI2, 1, LIST) == 17 END

BEGIN BOOST_PP_TUPLE_ELEM(4, 3, BOOST_PP_LIST_TO_TUPLE(LIST)) == 2 END

BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_FILTER(BOOST_PP_LESS_D, 3, LIST)) == 45 END
BEGIN BOOST_PP_LIST_IS_NIL(BOOST_PP_LIST_FILTER(BOOST_PP_LESS_D, 3, LISTNIL)) == 1 END

BEGIN BOOST_PP_LIST_FOR_EACH_PRODUCT(F2, 2, ( (1, (0, BOOST_PP_NIL)), (2, (3, BOOST_PP_NIL)) )) == 0 END

BEGIN BOOST_PP_LIST_CAT(BOOST_PP_LIST_FOLD_LEFT(BOOST_PP_LIST_APPEND_D, BOOST_PP_NIL, LL)) == 0x0a1b2c3d END

BEGIN BOOST_PP_ARRAY_ELEM(2, BOOST_PP_LIST_TO_ARRAY(LIST)) == 5 END
BEGIN BOOST_PP_ARRAY_SIZE(BOOST_PP_LIST_TO_ARRAY(LISTNIL)) == 0 END
BEGIN BOOST_PP_SEQ_ELEM(3, BOOST_PP_LIST_TO_SEQ(LIST)) == 2 END
