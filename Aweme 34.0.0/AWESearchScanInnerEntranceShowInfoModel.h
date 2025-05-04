@interface AWESearchScanInnerEntranceShowInfoModel : MTLModel
@property (nonatomic) double dayInfo;
@property (nonatomic) q showTimes;
@property (nonatomic) q clickTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)showTimes;
- (void)setShowTimes:;
- (long long)clickTimes;
- (void)setClickTimes:;
- (double)dayInfo;
- (void)setDayInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
