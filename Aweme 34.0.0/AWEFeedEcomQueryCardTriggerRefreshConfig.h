@interface AWEFeedEcomQueryCardTriggerRefreshConfig : NSObject
@property (nonatomic) NSArray metas;
@property (nonatomic) NSDictionary params;
- (void)setMetas:;
- (id)metas;
- (id)paramMatched:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)configWithParams:;
@end
