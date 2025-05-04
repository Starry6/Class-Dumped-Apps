@interface AWEAntiAddictStrategyOnTimeVideoModel : MTLModel
@property (nonatomic) q onTimeVideoBeginTime;
@property (nonatomic) q onTimeVideoEndTime;
@property (nonatomic) q onTimeVideoPlayTime;
@property (nonatomic) AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel suppressLimitModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)onTimeVideoPlayTime;
- (id)suppressLimitModel;
- (long long)onTimeVideoBeginTime;
- (long long)onTimeVideoEndTime;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)suppressLimitModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
