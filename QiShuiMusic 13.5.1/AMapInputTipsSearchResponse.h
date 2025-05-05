@interface AMapInputTipsSearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) NSArray tips;
- (id)tips;
- (void)setCount:;
- (void)setTips:;
- (void).cxx_destruct;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
