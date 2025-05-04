@interface AWESearchTabGuideStorageDailyModel : AWEBaseApiModel
@property (nonatomic) q startTimeinterval;
@property (nonatomic) q totalShowNum;
@property (nonatomic) NSMutableDictionary showNumMap;
- (void)showWithTabType:;
- (long long)totalShowNum;
- (long long)showNumWithTabType:;
- (id)showNumMap;
- (long long)startTimeinterval;
- (void)setTotalShowNum:;
- (void)setStartTimeinterval:;
- (void)setShowNumMap:;
- (void)resetData;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
