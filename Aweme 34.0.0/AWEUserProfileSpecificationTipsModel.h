@interface AWEUserProfileSpecificationTipsModel : AWEBaseApiModel
@property (nonatomic) q pushTime;
@property (nonatomic) NSArray tips;
@property (nonatomic) NSString exitLogString;
@property (nonatomic) NSDictionary exitLog;
- (long long)pushTime;
- (void)setPushTime:;
- (id)exitLogString;
- (id)exitLog;
- (void)setExitLogString:;
- (void)setExitLog:;
- (id)tips;
- (void).cxx_destruct;
- (void)setTips:;
+ (id)tipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
