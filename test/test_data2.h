﻿// データのサンプル総数
#define DATA_SIZE 300

// 入力データ
float input_data[] = {
16.90080435,
13.73044571,
-2.656815649,
28.27947566,
4.845166396,
32.08977411,
43.52170843,
13.21096793,
47.53418035,
50.31327161,
32.71605867,
39.0248422,
44.65125891,
43.60908962,
64.79520474,
58.28986614,
67.3571331,
49.71608016,
61.05142012,
63.35167535,
76.91661062,
69.65993579,
69.75568844,
95.85091234,
94.50199682,
90.76218418,
101.2736658,
97.15752035,
80.41375124,
80.47642478,
112.7771665,
77.01400976,
107.4141271,
89.08765256,
108.6544223,
107.8262014,
118.2855291,
96.6995697,
81.02050016,
106.4287066,
114.1149869,
110.3265677,
95.49263145,
106.1576322,
91.58317189,
102.9541518,
98.99611132,
104.7255483,
106.1437654,
72.35175453,
84.79864812,
64.57490074,
90.96796052,
72.72177707,
81.97216705,
92.13657023,
76.67186283,
81.49375102,
72.37234973,
78.22992694,
42.37452693,
49.48790214,
64.02846835,
64.49637085,
31.71221525,
23.0977067,
23.81250664,
36.55278627,
34.77022587,
46.83161519,
36.02870582,
36.00736157,
-2.573374317,
20.49195061,
0.405089851,
10.00613784,
-7.518088485,
3.608315446,
-8.351915121,
-7.051275216,
-11.24074236,
-35.24879875,
-40.73358555,
-48.3562651,
-32.10615844,
-29.04670226,
-24.71541413,
-65.73255384,
-58.88457625,
-54.14267079,
-65.24845721,
-67.25318686,
-62.31073714,
-54.50675008,
-58.85537535,
-82.37260207,
-61.28631792,
28.24506947,
-83.90871097,
-83.15452962,
-98.70416731,
-83.55812805,
-100.0518991,
-84.66819952,
-110.7706254,
-93.66398582,
-95.67739925,
-82.72456437,
-82.4261817,
-117.4843466,
-113.8588298,
-87.04092233,
-92.91040132,
-85.42061065,
-111.7167894,
-106.6930956,
-84.69136419,
-84.45399608,
-93.87891904,
-90.82938902,
-78.85735142,
-86.75576426,
-108.4053746,
-88.53559788,
-101.0493863,
-69.30566343,
-85.49043545,
-62.88104314,
-77.66516794,
-64.63563608,
-80.37977709,
-83.24325682,
-52.03247907,
-74.23835211,
-42.84483497,
-68.46982472,
-67.3562386,
-34.40194789,
-56.32840373,
-33.55970905,
-24.3267688,
-37.31827215,
-15.61412579,
-35.44187445,
-5.103738977,
-23.174273,
-7.870646746,
-24.81853496,
-26.15570075,
-16.86462251,
-13.91975106,
18.40443127,
7.448275249,
22.59107193,
0.457054965,
29.91170124,
6.594160842,
39.11500055,
25.28244853,
74.52794735,
31.3848299,
57.04703769,
32.16119975,
42.58392296,
36.74045605,
66.44710739,
81.0279906,
139.4768267,
58.92393275,
78.39489343,
64.26710789,
72.16326272,
84.96776848,
63.44790422,
85.29204345,
89.37571533,
78.1223337,
100.6925926,
72.76377153,
106.4153575,
87.61201812,
78.72456114,
105.6562211,
111.568154,
93.37177384,
115.9965726,
104.4024826,
59.77969692,
99.4351805,
98.7365848,
118.3973611,
99.24714931,
102.1820294,
107.627642,
89.66605111,
113.9279172,
111.8600267,
106.4402509,
101.3705517,
28.73726075,
94.36696975,
88.22469232,
78.80697825,
93.13556852,
80.21987208,
84.19039536,
90.04809635,
51.75190453,
117.0998651,
61.38743032,
70.37326338,
45.64429457,
32.52337414,
58.92990721,
41.9374824,
57.55665039,
20.51942796,
49.97240281,
22.51023084,
22.34597852,
16.24925435,
13.34613159,
2.975008202,
25.09210796,
5.686047822,
3.397995024,
10.47555532,
-11.1175043,
-15.19265959,
-21.48315953,
-0.920487917,
-11.7709246,
-15.79391063,
-14.35357685,
-52.884384,
-46.95301285,
-26.65576465,
-33.51108789,
-51.23145277,
-64.23731803,
-70.72297224,
-63.27024829,
-63.54236196,
-54.28972629,
-81.92559236,
-61.69738923,
-71.13878444,
-67.27919924,
-87.90729025,
-104.2367453,
-84.21007841,
-77.10930424,
-90.53908854,
-108.3432552,
-112.6699142,
-95.36719293,
-92.79960692,
-82.08256196,
-107.1061269,
-103.7171312,
-84.84748212,
-90.94473651,
-32.33218019,
-94.16422273,
-117.7995376,
-80.19314392,
-82.81476559,
-95.10632787,
-84.98790371,
-78.36993921,
-78.67928761,
-90.73636661,
-74.93341241,
-90.28669447,
-81.77943021,
-89.70780576,
-151.5678216,
-77.39559255,
-94.94418918,
-73.78774395,
-85.77233146,
-85.18120006,
-57.68651746,
-66.51441161,
-78.15161168,
-50.08302521,
-39.52992237,
-43.23942172,
-42.65462149,
-122.6162792,
-21.85410171,
-24.51261676,
-27.83910134,
-10.37653012,
-22.81397863,
-18.56980616,
-21.66123683,
-29.86511516,
-21.39114948,
12.40594375
};

// 移動平均値の期待値
float average_data[] = {
16.90080435,
16.79853472,
16.16764375,
16.53469766,
16.14580612,
16.63577288,
17.49451172,
17.37548474,
18.36365816,
19.44147969,
19.95164918,
20.66532782,
21.56050377,
22.42206136,
23.96704202,
25.30217305,
26.92979656,
27.98835384,
29.41256725,
30.91098244,
32.8469762,
34.54888366,
36.25387992,
38.8006576,
41.30392187,
43.68654703,
46.40825223,
48.99717856,
51.0459833,
53.09680976,
56.18959564,
58.1287313,
61.15078553,
64.11028451,
66.70302472,
70.0249936,
72.80550182,
74.5209167,
76.70832097,
78.60814439,
80.66626424,
83.16982905,
84.99137064,
86.9754472,
88.52299824,
89.75393202,
91.0670367,
92.27246945,
94.09271736,
94.45724428,
95.14908211,
94.75096243,
95.43831807,
95.53399835,
95.08629689,
95.0099928,
94.55546631,
93.91740454,
93.11788291,
93.04743697,
91.81834349,
89.77675431,
89.35786588,
87.97342213,
86.12260157,
83.36270752,
80.65258833,
78.01604824,
76.01832747,
74.91546022,
72.64449245,
70.12489163,
66.48295802,
64.06358122,
60.65220888,
58.02069165,
54.457071,
51.38004533,
47.73238521,
44.08093229,
41.38440013,
37.51190185,
34.1148539,
29.62052404,
26.23897774,
22.65772389,
18.88830504,
14.29461418,
9.766281039,
5.685151345,
1.056816372,
-2.479561492,
-6.085969211,
-9.909685935,
-13.88877452,
-17.56892992,
-20.29099523,
-20.14800933,
-24.03386408,
-27.83788845,
-32.53259111,
-36.39023092,
-40.77923932,
-43.42745949,
-47.66173614,
-50.69622245,
-54.1053688,
-56.53138416,
-59.30669052,
-62.82709153,
-66.27249652,
-68.71766362,
-70.57771531,
-72.01923225,
-74.06312013,
-76.46915036,
-78.26413946,
-80.19119049,
-81.09913775,
-82.12961559,
-82.92686335,
-83.62064745,
-84.94813737,
-85.79410062,
-87.29547598,
-87.63258205,
-87.73315732,
-87.78460007,
-91.20105934,
-90.57934725,
-90.4898391,
-89.99110006,
-88.97414364,
-88.14144857,
-86.79230778,
-85.42776583,
-84.57912882,
-82.60250135,
-81.7510123,
-80.17467447,
-77.16959132,
-74.70054107,
-72.39645086,
-70.54262741,
-67.95176058,
-65.09555038,
-61.90772945,
-59.97634786,
-58.09575769,
-55.61142554,
-53.13046948,
-49.99299262,
-46.95415263,
-42.72846081,
-39.85773007,
-35.63317886,
-33.18479743,
-29.16526724,
-26.32128364,
-21.4118283,
-18.31439392,
-13.88127086,
-10.15854645,
-7.106404453,
-3.526442899,
-0.000896371,
4.8216138,
11.49364817,
14.50416044,
18.85007326,
22.00577703,
25.11835869,
29.06306968,
31.61345774,
35.50810026,
38.55582459,
41.82345706,
45.32549704,
48.47331338,
52.74979913,
56.12001334,
59.10853954,
61.92311341,
65.28181917,
67.56506762,
71.29214884,
73.69507727,
75.41073972,
77.35655198,
79.72604025,
81.14118263,
83.3302897,
84.78625718,
87.22065854,
88.73943687,
91.22935497,
92.69428785,
93.51403818,
92.2848035,
91.31103989,
91.82626816,
92.59909346,
92.81340687,
93.07688429,
93.61791551,
93.58237847,
93.60406818,
92.75340918,
93.28267603,
92.91569728,
91.75304909,
90.39925155,
88.90889068,
87.40159024,
85.15543954,
84.00011298,
80.92020509,
79.16439606,
77.96215522,
75.47540677,
72.81452514,
69.4257758,
66.32022286,
63.8334512,
60.54501268,
57.76217216,
54.4249992,
50.45798207,
46.53433979,
42.57131685,
41.61461528,
38.19081224,
34.83537344,
31.83019424,
27.11987319,
23.01752206,
19.44183948,
15.45605934,
12.13401556,
6.284429007,
2.022803118,
-2.288277904,
-5.810428115,
-8.61085071,
-13.1545765,
-16.49763688,
-20.64910252,
-23.4813163,
-27.92904833,
-32.01766047,
-35.45495263,
-38.46651903,
-41.81765516,
-45.40856689,
-49.85250309,
-53.11228505,
-56.2154335,
-59.20117922,
-62.2975864,
-65.15321451,
-67.19722492,
-70.10123294,
-70.76449925,
-73.29257383,
-76.62954031,
-77.51046805,
-78.66729878,
-80.87538146,
-82.53592391,
-83.41135896,
-83.87722894,
-84.52282231,
-84.89905341,
-85.76177381,
-86.64853846,
-86.8995776,
-89.7986238,
-90.00045632,
-90.89287535,
-90.43740612,
-89.84177986,
-89.87310637,
-89.24656486,
-88.47157528,
-87.4976513,
-85.47871939,
-83.67751712,
-82.07880146,
-80.80693242,
-81.30725991,
-78.66651702,
-76.72023104,
-74.68456539,
-73.97631862,
-71.67469784,
-68.47373876,
-66.58561273,
-64.87755949,
-62.49965051,
-59.35791349
};

// 移動中央値の期待値
float median_data[] = {
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
16.90080435,
28.27947566,
32.08977411,
32.71605867,
39.0248422,
43.52170843,
43.60908962,
44.65125891,
47.53418035,
49.71608016,
50.31327161,
58.28986614,
61.05142012,
63.35167535,
64.79520474,
67.3571331,
69.65993579,
69.75568844,
76.91661062,
77.01400976,
80.41375124,
80.47642478,
81.02050016,
89.08765256,
90.76218418,
91.58317189,
94.50199682,
95.49263145,
95.85091234,
96.6995697,
96.6995697,
96.6995697,
96.6995697,
96.6995697,
96.6995697,
96.6995697,
96.6995697,
96.6995697,
95.49263145,
92.13657023,
92.13657023,
92.13657023,
91.58317189,
91.58317189,
90.96796052,
90.96796052,
84.79864812,
81.97216705,
81.49375102,
81.02050016,
78.22992694,
76.67186283,
72.72177707,
72.37234973,
72.35175453,
64.57490074,
64.49637085,
64.02846835,
49.48790214,
46.83161519,
42.37452693,
36.55278627,
36.02870582,
36.00736157,
34.77022587,
31.71221525,
23.81250664,
23.0977067,
20.49195061,
10.00613784,
3.608315446,
0.405089851,
-2.573374317,
-7.051275216,
-7.518088485,
-8.351915121,
-11.24074236,
-24.71541413,
-24.71541413,
-29.04670226,
-32.10615844,
-35.24879875,
-40.73358555,
-48.3562651,
-54.14267079,
-54.50675008,
-58.85537535,
-58.88457625,
-61.28631792,
-62.31073714,
-65.24845721,
-65.73255384,
-67.25318686,
-82.37260207,
-82.4261817,
-82.72456437,
-83.15452962,
-83.55812805,
-83.90871097,
-84.45399608,
-84.66819952,
-84.66819952,
-84.69136419,
-85.42061065,
-86.75576426,
-87.04092233,
-87.04092233,
-87.04092233,
-87.04092233,
-87.04092233,
-87.04092233,
-87.04092233,
-86.75576426,
-86.75576426,
-85.49043545,
-85.49043545,
-85.42061065,
-84.69136419,
-84.45399608,
-84.45399608,
-84.45399608,
-83.24325682,
-80.37977709,
-78.85735142,
-77.66516794,
-74.23835211,
-69.30566343,
-68.46982472,
-67.3562386,
-64.63563608,
-62.88104314,
-56.32840373,
-52.03247907,
-42.84483497,
-37.31827215,
-35.44187445,
-34.40194789,
-33.55970905,
-26.15570075,
-24.81853496,
-24.3267688,
-23.174273,
-16.86462251,
-15.61412579,
-13.91975106,
-7.870646746,
-5.103738977,
0.457054965,
6.594160842,
7.448275249,
18.40443127,
22.59107193,
25.28244853,
29.91170124,
31.3848299,
32.16119975,
36.74045605,
39.11500055,
42.58392296,
57.04703769,
58.92393275,
63.44790422,
64.26710789,
66.44710739,
72.16326272,
72.76377153,
74.52794735,
78.1223337,
78.1223337,
78.39489343,
78.72456114,
81.0279906,
84.96776848,
85.29204345,
87.61201812,
89.37571533,
89.66605111,
93.37177384,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
98.7365848,
94.36696975,
94.36696975,
94.36696975,
93.37177384,
93.13556852,
90.04809635,
89.66605111,
88.22469232,
88.22469232,
84.19039536,
80.21987208,
78.80697825,
70.37326338,
61.38743032,
58.92990721,
57.55665039,
51.75190453,
49.97240281,
45.64429457,
41.9374824,
41.9374824,
32.52337414,
25.09210796,
22.51023084,
22.34597852,
20.51942796,
16.24925435,
13.34613159,
10.47555532,
5.686047822,
3.397995024,
2.975008202,
-0.920487917,
-11.1175043,
-11.7709246,
-14.35357685,
-15.19265959,
-15.79391063,
-21.48315953,
-26.65576465,
-33.51108789,
-46.95301285,
-51.23145277,
-52.884384,
-54.28972629,
-61.69738923,
-63.27024829,
-63.54236196,
-64.23731803,
-67.27919924,
-70.72297224,
-71.13878444,
-71.13878444,
-77.10930424,
-81.92559236,
-81.92559236,
-82.08256196,
-82.81476559,
-84.21007841,
-84.21007841,
-84.21007841,
-84.84748212,
-84.84748212,
-84.98790371,
-84.98790371,
-87.90729025,
-89.70780576,
-89.70780576,
-90.28669447,
-90.28669447,
-89.70780576,
-89.70780576,
-89.70780576,
-85.77233146,
-85.18120006,
-84.98790371,
-84.84748212,
-82.81476559,
-82.81476559,
-82.81476559,
-81.77943021,
-80.19314392,
-78.67928761,
-78.67928761,
-78.36993921,
-78.15161168,
-77.39559255,
-74.93341241,
-73.78774395,
-66.51441161
};

