@interface AWEProfileExtensionAreaTheaterCardInfoManager : NSObject
@property (nonatomic) NSDictionary guideInfoDictForTheater;
@property (nonatomic) NSMutableSet cardRedDotInfos;
@property (nonatomic) NSString dotShowedInNaturalDatInfo;
@property (nonatomic) BOOL showDot;
@property (nonatomic) NSString dbPath;
@property (nonatomic) NSString tabName;
@property (nonatomic) FMDatabase db;
@property (nonatomic) NSObject<OS_dispatch_queue> dbQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDbPath:;
- (BOOL)showDot;
- (void)fetchTheaterGuideInfo;
- (void)fetchGuideInfoData;
- (BOOL)checkShowRedDotForCinemaPresenter:contentID:;
- (id)getGuideInfoDictForTheater;
- (BOOL)isShowDot;
- (void)fetchDotDataFromDB:contentID:;
- (id)cardRedDotInfos;
- (id)theaterUpdateInfoWith:contendID:;
- (id)guideInfoDictForTheater;
- (void)setCardRedDotInfos:;
- (void)setDotShowedInNaturalDatInfo:;
- (void)setShowDot:;
- (void)setGuideInfoDictForTheater:;
- (void)insertTheaterDataToDB:contentID:dotShowInfo:;
- (void)checkShowRedDotKey:contentID:completion:;
- (void)updateDotShowInfoWithNatural;
- (void)showDot:;
- (id)dotShowedInNaturalDatInfo;
- (void)setDb:;
- (id)db;
- (id)dbPath;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
- (id)dbQueue;
- (void)setDbQueue:;
+ (id)manager;
@end
