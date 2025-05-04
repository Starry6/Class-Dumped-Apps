@interface AWEFeatureGuideFrequencyControlModel : AWEBaseApiModel
@property (nonatomic) q itemID;
@property (nonatomic) q showTimes;
@property (nonatomic) q maxShow;
@property (nonatomic) q lastShowTimestamp;
@property (nonatomic) NSString name;
@property (nonatomic) q status;
@property (nonatomic) q intervalInSecond;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (long long)showTimes;
- (void)setShowTimes:;
- (long long)lastShowTimestamp;
- (void)setLastShowTimestamp:;
- (long long)maxShow;
- (long long)intervalInSecond;
- (void)setMaxShow:;
- (void)setIntervalInSecond:;
- (long long)itemID;
- (void)setItemID:;
- (void)setStatus:;
- (id)extra;
- (void).cxx_destruct;
- (long long)status;
- (void)setName:;
- (id)name;
- (BOOL)shouldShow;
+ (id)JSONKeyPathsByPropertyKey;
@end
