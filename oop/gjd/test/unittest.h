#pragma once

const int MAX_N = 100;

const char* BIGNUMBER_STR[] = {

"-142547345952762998937864146994828507386048238152984035915758596545352116640789889537288859546997064682712738116059560665339009112890412263150191378916906832541445533825073022932396673460132638544746042154578434888196079463270850168291830247815638200659990776796352501377360192352420150434094893464378963960070035445643927430879461320921135199146849344626239880127857800802008311695955687979255",
"-18358760152089348061280044876194630410661533748646316671979868571747470094996520887643145994077046099700303098082269103068113919342996191518983272401000457146043904473224972567437424914642066027651746727291802553122795073352914255654647723616351634446360370604805086760",
"9867272143148447519473832195032010616675283465999954722010617693943187343003251267382370904708941007494047801418934525224652217072276758161736762825626218535013950777562787356918534026649438267873007934762633571060026009482431397342576409430185713882081761095641628709002123742433959752647440706572625399253995763983708593637690101",
"-15987715491161157672249795591778716953954682059666472829904745879199692876000273763804817304505301150989399726543011467080576935058227229919505607806424136455838043485981307081403307738003976584081331316604584008782608394096203151196286948602212284815090389085071676304932155046944423635898306420379180704839761345925936767191526246273161430767551225838773198488353699738939599861057956626916637088414524795808918885627401385990535441846415188100395221181881508574695830028324953",
"333729748331745463943479842432194133599566543603829950023173203016917108801293843762578665097266635625119184434353822490704744242265995025691088746413789865719754668524298510146268746983615344684177934587028584209164350940473772908512528235382016509437046978140233381853514083396470558545735796936732939828926",
"-18379062179534454099124608628635907861574523844135283238990751224490783223152028489258512",
"-1877778015254100809974243378122085044771650163956147813444289363565678125585975843446079402127089119380906983834335767053291116655989080695439967319629638081127641976871787461727655000711",
"83803590490535748990881912985224060700278591373150323450334440268510135655367487943703935201465510391249906267868710759132849795914595865332295889236317557194666704235347096150564369838109765388426797098537505078705318995812952124372086918054182868877012501403213826761325925039908794485710435387317510655443051671225485520901156436286603726945202468237678014662192025671537381954730426584115229195982403912086542577166575966016716178602247597190363022751823874597769924626933436072646551013",
"55149103781036937162794638459540957626008635560107413645941173178167286412817550136323455348596254878722189304776017818965044940509676942004770688747700363677295666164979985643496104402336184009061699442490481182730834068296528409320008840195700718941745851385050827985",
"592614732330176611441988168390712116277979503394279097960629987298611554862063825196784546383703497769769708174314987620990970112945442322609554777940770489344774150330074193461784779735358085191045065503143386169376442424681876101328319784054303237137388166154278813046701686005273895776648117259378605794034909407112568564562266115831055656837234570780501809676778",
"6563430758747069832283432845434826294247881949191828186194180070709156304382254218099192734757303889534428039590868793786782240981836446940898147889614919358014996173254590848874553783952172893332988098894055279777816684254",
"246559035786687504098315378580244815560003576183813665985645681411017331",
"-11387984774354689652327511016657527302467877516623296313281352199050418230954517287242985608323819465074483106050132199999547527169513541589160156278916569280092725377984164793433233393095370810180921625763660463190819907684377597495801221",
"676440666972656574592678599541536787889355569034594285729444375662303236672194406102930612453976088881822013280438836426467521046820433054763092750791755441368762087919350799115402772937396301957256959356012214018140726842145652014959892648649844443181618210973852506238692086129557938894884717383724392",
"-19649097228121213851192212934355215503443681465885881033085988397152640896246120971269284805479173889542091410312927703131170454260124262486684431547638238922508470750046469347030666670668705421112462254023942891842855637780356583658252993842379883129127825385469688231674347096500165183127462620743538960603080645234448685567753270998896814034171179981650258784962331658013223357580669574004631893219553816698475157",
"-13562113220460114824310203729575577211202360678652368363601683770642286441950483707641470222695644763403794416806216207857654520693470276035191602179826960436060028720295076898686252210285519191090265737002817990207429596111379049728132450168095703459599838376697848734283335286703213830875013437941414",
"4197632726046562400267530680634745664560047956901453385595411505838783660167044479097325599786757499922633768841473838760930084599676412229226962816474608719968931392481424940883046400756243641694056389454603715214523471559644656229979923971712623166909303924263916935714885756800082533381755475444529835641665549080745091898615696108333987495896590518952917077761828685095445734147081127681911437601515760924593685221743911633560000290153626034600164640298737203629361085136844857568817743296",
"-1378854870785244848414769769758992460468033139407996485164622327360049009300025089386089774803811008758197820679126823604203285235923101668823956794743763519006794950248055834626422562393544238499217012249431502583338586230095825518991599488869612215323148573933663426250484510218297814329716838578074813563693030162191358759514334857917767",
"28414540163737533407965707615820133847269480008878378678678226888129778628396187861015454756808",
"54950824196968897967999059611354306350927813316767044945510890185058247302564379841622627548476782602732585221306510189341750204886995331540022499265934544278658806042240748299311008344843636454295626555260334028706507333688380679446393132987221521926121203969401420244795014057259194839883207440085113210946578360204886840472194696454453199648469179453932301073062895993706952532424200420803874724838471415199230953926412723100106843576178565139076541695861819148366245597065537934772580",
"-18876050406076017793294508294162145792841735025015278130971262182732874619782833686281975244578468754082520452074017999460578042128552848402614530084023065745883087008405992718686812112043017008902356924381964710838658338979518836093568739275253522283833648669834885502130503126208582305805269483246860711211258567929117099764037531257977696741375423741998490603544988",
"-1638358313239858592951432716551745996590173464531611870788656357418246863194477798618555254899520020748844564920901283685250314066851196643892",
"95733781863195436096005238758529008587793692054336546343591619849063792663219477213651998148961928636367757832626732797842112719055514823336594302895433383518342197905597628506801503528082867581",
"-130428078610086961636177564553231078327801038039538708946436",
"-15134863825905752864486961460160714762572017179787760447747180438316197739426894709052344845038384212629849064066620246738629975212542651232928060290343777258327073884437132178722523585937521423043486301584451840900053004017309967936908493059526552209794",
"987645720746278608240384744262982598143897622447481178555883376536769022206515276468631402551348239355992670736316055064256672942500281575244139018818841407135623528568082264706470069120817353280375512737562481088182764382519198979035508110826866806476357981495022",
"-14703987110099951085922706267985736643498084918429574384167963158178569728539359993261838993260924298559102053801517156265021420723913581368620083644665184348688914165119083774502455241626920405920378407142371441361804547456125941101511338153681372",
"37662790445779664241703068438431270185364238818272777",
"-171846003286681814965018612791035667593604597645278555806492345948526126079563019417023917539006470504361592448049940391872317473190062016502705805586710467704530537980212950619441010738649810177485858932367050803042335503114696289965",
"-13314901673430539349777681735876940946872174676736909326227568032843651797330181416170315365303194885258226706467001345749798749318484800488116151433490194455096791522067976933350545963459638012982529679891288778417265363088251743988879394734213033058612237406290852122082041388968466999929027913431280836862669201964631590346989447241070789889321113517804297550370",
"5640656009854087684810555231886969883016747621222525676740364910428576248298555768580787151657657932950334621492705515889277097711694934279382010470523886795818002778388483522780889619875655033482125491582884747354244729773858492223706342341730827509970614428146785903824451796621324556212022572631305904294534028472869322488171645735554327783813647664082055057572570186724401102031525676469961657508453405583198",
"218009072541162518582196121672218608017504204147588351342866312170747866126950891374487563562083915905432390132685271597990842416518704765946804195705142515069177685739763664584360887871657473102787384970191037507651081156019486716552168117183424980165221018590067053231653343407045381269115641245822612246533119265891016613121709429322702384078356876477761280731948138059166693321986022526422741206554270074697273433370862601783294711306807586701872738507543504745382117779233404695",
"785818176345956122890045569077721707812339732230832313395424063890317877272398804681796072012103037072855914230807560028939647338963006228643380831335477972151406422461495525137468938379174441034125281074354438157870141873816020245424315314324541856443159075552745550771264906739234066703556489701180399853766553806651446400571374174179376564519141323173990798259888799831160796978121535044972392435220028256964450412286692849667388770082611436343700526514836116168507242167037890100920269887724134",
"-15376509513107446443470266800090112636792651123142468309392810151320879450052150611388653208872478934712298808909123472830747035959543770332531713873436970039538575262160423440529086355585070741368671519906017208118973658660570122714265693405038966708785570655339530102535527444982323325865400566548870572258548876661129172454994454966100212",
"-1976288777752291405420357014877396024084502355615367335867756167007805783356043073570183098305205075240023467324463070708217128830244643157347871399860468670280584599016202985850443721135605854999614975836776443266353297606359217504838487728998817951375150708299955707853475283065656302254414287087456079804280157622264915579843360382448643507861272968104724374970278",
"4033372894751608219759871712287215629284389453626958708744732504017628524369645566545241464585073398323270040670929843561094283795570822354874283565701274018832523579490631542601915370202405165120990646817956494554127030900862027760883273864658492093523655560824429201315939057968147",
"-1850474145265938877505132418080950090609845246896197716301559812524194913965385067829121155168616949741408558157397767761601970541391962699988487122887900338032932403345106333522938310294986117244527",
"-138133533136796507429049221666760975584864777621801155477137624986865537457984516896122665437549319408267724336125199906836618309628286314501514068836309231851876641783168917050107961213563300288952414213083915084292824734024263792983331779435698237356476486297739926165518754718775531914460791455142124427200056885682204854810778605036821419154983902753332343267191083125311977145",
"-1952459412376414656819554689423699508947567422177246540274306415543624199021732144729380783890173495185126819312642",
"-1213457457017099240525524870488934111961082110055277904539006150185922340538504975196779020693461955502073910015574152528472906976090717238034592732100079216701931226839411554105158080",
"9867835244656610028060598283205283420036120271455627676667168699858982524996725564813229491000095605564398033340115603977506150462793062252821617612389729214081",
"-13957304632872447556206389680877304594528056892080386464207424445534391639101599736405160753407827836",
"-135097556757756982387728952287155556426736794397915317143716050057280013526407031788919619116219813658569103964040124717560903162218227367852855165374269837701363251897567741205717452098405454080275624668897328035459012967758550351092558940010189147816296170027946872860524212119896517231326189623587687714830077228714128091543964833843438556540102419543570691236699585654181417838296807032147792002190498322627615182343141458600836919736432992157",
"515779964596977487860532170404965139863887772812409456927590039312331033654358839961862707335952437019596092738858769787889",
"-1127712150129178075055753971898439986448448849134307825393891954014709000329781936431953772273404592930950081710054544439668334089342629207345192539231780587611734990416496583278608739007828562022",
"-15351766619433380521553395866974478773601190685267329421120271907901407231782509888246143738604500828297795706660351280723288501876534450621126941361533797193817802904961654761752643367319831681630647213785611027811385702049400809124077219630245291163984425395144525683637152945065241351582846497783384322676166818353540086278895527456490163263419154725424232567719903746288448155612245479654637236568883546477797530479059146734503166207090851291353234317896670367116554812585333297834204699271158",
"73056575152664839595573991092067770438644336554009780222484853105784620398568609630360703500891869958169296130748603581556027750032696633802590124025536112943781983148217674392630578503559971713085701241151979728213718076575612565763992430582561413669697842484090256499223342124167215234481309940400020389072393567502635",
"-13747328843452644420396164148947762083165552504052890696060166058662618280533629156397245077374483772216292276407353184784600699954768963477002140631776973739056624009047548818011330253821047202190081634962568019373617811457225841758907680892370305450589208",
"19158901594303333245276411609663525399787917958808463551516035901337816793273563797349515395109164374123584933739565363013623160928665581206178370890453067919805960726294128295709",
"-19735907568294082821501759839287074095888802242714648520625532182980263779360070370837964822439395040655614508399563479636545613525556372482298035263650930990920213593074398221866724032322016118185366939585231947094020405305752492930607201311593914739723973816385684368228449523454790286418300045138002866799285012007897452099723794846976780556135720354206706217754312001109539525788317756641932600393224060059449691452174610998837625368165150713836135831805534675200694652011285709080550",
"3252928361361726187279768594084919374087659238674123314038399805715050809150281298219337472851206808771733880952378058151870968831828193470050601475487100488330282755900499373292528421720833342918044533089809429635221330504119496114972111437742731383529508397736358010467511794428360813191237782032705224950219386938269003295210680740177467349876471260072760870088411465707288280975873561800996209165192579745442323832290514226303948299995",
"1870899746999661721138030145037535691566521972449092777108758959995016149817989973347029921522380056795633095011571362536551831782453369680558477431458720171871345701174181882633722535769059951357388965981390256538120972352861312094881809796217751242883626712099467092029943672931289612879511459699335624829028818699690008512042527555420410191562273960064099972040648914065918437469941352012999648653999795470475058123675007135165404480721110423675208925001773917370250321819818012281036967363730",
"-129031616222067063904569344720079883632425366527368820370034690521217921400854465525730969182788809524875794072689076361282767250519714406130164067275217178683869464711803951484648622535798531432688982495525303986573244437891",
"202993220908335177048775743811467010791995726682078700125517966708819428686952047636352432663138016281375139201783341535244336513711260286941788610471197449705637556330",
"-182792671276101173822802946697630637877964952111115092695966922550135199717877267330950698403922375617783990760906014458353166929169506976880747888557143532974895264980013521011951965773915292920721526338450766678965129589443698163419437864263618873352642084047533469819239508912892289713973542603098986440123921334303209239708238836946998135342069772850462492649813284579646397725521689517315573121835820047256036788265481519922077542422",
"-1839788429498429309248197196260318359715469960567033621632096220731821770171763890806512012152586117289622514856516595992587491",
"-150039419954542612268940190034523561011242798620945174270391408001255268601674238",
"-1365054430027160764331673806384451545446002301113299970231763520552449389195453035088427863713406746779295739380938342098259355561127307436702175153099968160375926395335935459476150565159014511060238853261475975595448672676938404149652655824493717781410734803749349240256575819983918353483222270344017011157281662384619604822123724538590515171256707011033006089112734230726357317920739115944189158628517228569684657123720355885232",
"-18824194366976793119448242288816193814232262518687543835464748340666394569613459752065559425011788693888987235562143423459571011473251914703435319029349819790",
"-16004581931566677792413221535266943046894729273231421408616230109705828532562273502281921284166176429292341530093615565452149683655416863839748361259162353636460279705092643254588426708281241301877147972922410087640295052927669690948446237223429158942581523690086420488364024008539208790898438283188794860487839210086454862365720292865156614885369751306925620101269971263981991634614710245282517234047367666381288941701743148919886719692077175849781405860907813172911653706825966",
"-15350435964190179929382742618599716169115362619499845463482425867032320462648647557647771017431534352008497502897579528638334480945880331598942366308594381510045001143352597028318890678663130439561436386421513352215852722699062424967115973269157985769899555326289011108123879674209787045977988414044699857717350733065758958742319918741195020387353325771614871485334178518399368815780366119827419413905651",
"-12476222983982735574273120080018812953563689198848370752741526495258441877569596618474621353333302845109429435159332397836747069247569820704394268009713397532637690193736208573709970013644076455776305304154894995359230841849219573295167534178600897172553307436938229845275390870199893896497289727411953692939694670971670043264214313596123696174703963248725706096858758621681989421",
"6282812124361007916193095537796131866850452427241573832245006137337559937710697886884196195857793509658029928237661234239697976238098280488048439126531570146371134967754416686013318798938488145575673307574468376178618575919859000033062926594982062170038514432929978959333507511736748357069000118824704626823582959456755959375408488268684108163542215278377878192774903205125711805604877675297702664519350351779513744",
"-1455290984605175438776552147625072457016287984937729172168548975513395276215033272400704999166505496965879568838100996754730776298709568502371158517365327462997522996835479567537714779071027940098519257705254097695190063533769349917727927925956647",
"753343957213776270220653892592068167226301175125146652828272887670375510760156819903807588685056816082",
"-1717195432118551896169665399042715653568353152349992401943579714700838096293436763008037202022422962568062271972275118374926519199075275369745678274780040332004305849758536552773381335193688078329295346309334374561781479687322740705561120774123830610707830284315252063896284449408324501383733368947992474638716237053948245197056729634773107769357291692477035576762056741574912084288694549750853754706579804",
"975014884147047694771355065933541415574917520104646760781161096263319479676038323048654638652793271191099375254039220857615018954481944206713217601366688968434014026862471928957154767333729771",
"-136861898877935532330940589058197432727157035223693629430003220390115692722082505926133244051573890482049185518785961387531929471164663508111087236618860006624226611893031349002492839556162333520106353697231935067451837000597212061619166636146877807482414921471804016906148158534528",
"-1893456610214193655605992154617655686790132836607667075983088410337337492721031995453558184826171429514021885610246216368237221857822363930936024738985531037",
"-1935232764229355534317073209230930034416031434373135247421463048675064066507736975299790030088451927244579166536310129236556029296842165970581870954517862920762769862924194591711943115503218735635257154028668327412211084383194307899433713128144616975509801869468521",
"-1723560267989251626740405891518607253871227230904066566329247260887888708169319522550380760449553817984469109015977261114477044811856617284396449838178375183594205804883567730931611034607456647394268804799057660672734261532552478004383898210395270392765753317022695098409456801876611193902433338278020604508623139726901571925385619178704942544709887458204697198145810356708952847699320759546198768661153153159088",
"535125062525665872255163983014142212642690755895181720804500258100915317149142678583930053345342808412619688816873606937050021007062417241050029541646514061762971282122211943582584552386623618910330795992863815413364904179216111341460261053077101973343738237759341957910531170656568640980862238527387861153740286449722238567343669077951000211170976527462952081577597532079386466716823650038832118760281041396765250955521363583038230244664138371550709222260",
"-136123792328154937710685863850923766554150320743430723862938819153859355623122939112252358133676502649200600331104509544131470341182632454205711103176718014316222764311639277700752900672008",
"37288161054344109173567064286145161579283797205244386707489232753714383102229638686331155331437525881513436080614658413789761701885458002777210827",
"-1241337631258381211577296487839610881965551701881416198395897",
"5795336947559677014905860163533673738720459269780195392036469364782540290497314285015276326584551338746087",
"1031529387828696285668925216100224390878823484786552187522338662922020788744600744488840187863558707284693896946762335844462533905358727155545336399069377952",
"2315894924620047035156682898191304512531856637995905292838844271809601307489393197997804659869815267233435159507045369409306466406665148961378130917727182237666454379958404681671353558563598697486522736555319324487131070834130426757838242997447259938658696646729839156219538527447737467894976639594504564541636725233",
"-1172666092558106076221859456840733838873814024788241153489595354066725302151348081042222497684092051156238458880430693342517062501409695901092527323308109890686282728505104882732101977238172611259325847517523078320713015865039988500412654130600460598331108428658253989702870032373913742598092112812897698286147017694332597590663687083139557911107076782254310814487402153875892243653574086060743731578338009865813632336509365120971331523434787252820573357586000028410485017031810272493546385543797858178",
"91887424637222623667295448625411543439365760838293729000215841318593275498034268393818042599848530308763084488405152955520724482496828114806139885898729534890484815595610477374413190768437474310530690503107048411549887627561357803367180082975512875104670024341270524958016352603494715387719687112400861003450759936522618398747892887639569309167896776893202630562468472143290333761173947513683348098348404633",
"-197364559967886170562742967796127835008450980107486865731751580790679508290477211477965982983459846231431504137849856377632467586729882539364039730254381522323877731096746535702913672742710464106809444185461072299536338994996371148060439998679",
"131146720417010888021925115219888171228995007965224612829316360271459067468367801587544413738044571219917212862105925520640762387700965330189671052066297558923306877001372631780111932735278524581529887759051946193243407788383329083477863510225136066831939949115603215995446068137244682680403732099748855060378921079926779130630",
"9480860639244090889301083876002075982956345081191119123465819537739280823441524961160929807365861130295135095830627830131373137668759",
"-1752098786240363994505685909177938893331303182260929045260907615711625590158275423905819895810108537202834327195589135688196125696738049707526920023039440191752586020264514914902968714069707932939833950882068484983880321729815993630601671612307049691407762545889465073545287431080080441717444108597036869891368794917126718586991446337796369225164534329028139209516",
"-14393300959305216841935097093140887287418068975735587473158006997478252451001720156936399345092749401003110152438208962928871418430404171112222863251188238464604224408274572668891742182092564110021621856834225314339994227995298242765032361163799985912308399396004116527697077666933779573803696142223473300559916521054274975008822536144539509891630095579544157401722930592090229760976138797165491329932523112412429327405293396204905276843388073194538476739153463686770597633",
"899560024334565440666757576665354605133053851157496291984501906433986772024907119944356840686338714417496257660502842605534786271645675545994973347347297507689798895092661755089085757247362714347409193366266790643096087548124327661716176031042287612918880708506370010220053888318222092676620272297002675414330133754500369",
"42311528321517139063495244692806465868674438755331211386399130795920148",
"-1276589155326261394269855058209450919198676547158334655327008232535695728725376912629034796509927256916014118250080707753360046254931182748077794674071360591229248173143066593155733026173544468935395755445218532937259426008226143956098275477425221074610421827901962355246509460463458101064624935081677510633257561506314707524938405653644810970155345453308496497255700208788732594882218131101505003547016958469948302493151288320064891364457980951061018974131",
"980159095609787881482894841048576637525429395253090927153840698063329991632262069431437408663816109324119998772665861641605747966649181670924822830242501834751451943114350464410669597275968279086850800773473182734991629894829321400270954784439491239104295442426215024681614118361415611139781275611491202848032050792727073481588348244",
"-181967011602232694138070464485937146541122802084329615832060401594794471036787522482338571963735082772948932740086747088279966764285600568789515280878993024526067063243650198897307626119791699392222077049191493148720284069456553958464358346138569683156064593834546818190747128813745841313975429336364455808067296311282357701563643792499535815495109782720964427980951752674953953745876500125540775413474538325353041",
"-13724326492929756511002471012462639347517751718579510869051776401631340787192513154241548799744935649717710569713388147981216708232635193228344264185261495194693195392049477320532366581869844446964010876445396162541244731146375",
"60305353125980341849690343975955256248799232339116116396054893737659867128841170226557116812120514780903735835301239742826279279739225110599282389734837808534973849209925778326465100024001068208068301318096363170748480595482265532236414197073950034158992021278331193736777689993285322399380614050518636783515140995786898879647571384402",
"-190681632476046135450747852360793700183488745758797607944824334879593047674228255897186061536104037266047310342034698079431275501",
"33383512133500455368562056767798635292557944068257518385812641153425559805696263683468525897886912000833236771493124547361483546042171181358454327619153059027522253931028202924046626450662724489395347849978796951541521370017947333769069200713715123760968678015365",
"9211698308911395928638998015917215324152334359183495807822554293335856937629374233938779177296057899324166308387752777025112417194697272089217181973654166313815547501947895937555658175094859817161564094904983655286667568829033772594033589074266813581470037367142798419705325676689862955876403847928649076039530182643598381384075671807812806143440317762407965552853616551755300846619311557551294792414851035245655276525753649350433071704114724917280501731745833388409966679",
"9075018868024536556280212611375381475253580396608804664611399529691167920090082039579953785151583224863851060946067697985399534328793752451995396538307265929697258317948",
"-178952745258764323486117320926526311391983966948882743947715036203136892051940947099219942363439116935778809430537865079036576560602966209374406341493998919174065516749310120291558724721585407786718556499408272758010315886844165431824655177974850092025023559324764442286474921199786533884724",
"-11551615615371193592912353432524855814953752766514133390913939605416964655065865635476956952029438225633248189818258333839944574727295334324146737482098225836035938401359654378159147152307336319185786531731500909357477807445279297350495239906116525623629468438076157866910441",
"-13904578025540570129919109036772579723852471235613058851684679930091907187957493707879369001868703457792403893209571996987013882188552067207592726130435944085931106126723671857014394738938580207022797862556078175160455067980378047",
"-12941923574629624805590571530440027113541488947232987914895593486004955630196717511201376684730722858861329174004903356078678590642961290565935433783113215341798216120529547263246383134120823043927629868152239747143309309908055183588923631548190690124",
};
