@interface AWEIMCodeGenRequestConfigModel : AWEBaseDataModel
@property (nonatomic) NSInteger retryInterval;
@property (nonatomic) NSInteger retryMaxTimes;
- (int)retryMaxTimes;
- (void)setRetryMaxTimes:;
- (int)retryInterval;
- (void)setRetryInterval:;
+ (id)JSONKeyPathsByPropertyKey;
@end
