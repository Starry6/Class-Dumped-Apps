@interface AWESearchScanInnerEntranceStorageModel : MTLModel
@property (nonatomic) BOOL foreverShield;
@property (nonatomic) AWESearchScanInnerEntranceShowInfoModel currentDayShowInfoDic;
@property (nonatomic) AWESearchScanInnerEntranceShowInfoModel firstDayShowInfoDic;
@property (nonatomic) NSMutableDictionary entranceShowTimesTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)foreverShield;
- (void)setForeverShield:;
- (id)currentDayShowInfoDic;
- (void)setCurrentDayShowInfoDic:;
- (id)firstDayShowInfoDic;
- (void)setFirstDayShowInfoDic:;
- (id)entranceShowTimesTable;
- (void)setEntranceShowTimesTable:;
- (void).cxx_destruct;
+ (id)currentDayShowInfoDicJSONTransformer;
+ (id)firstDayShowInfoDicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
