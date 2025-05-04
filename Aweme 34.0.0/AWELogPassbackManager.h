@interface AWELogPassbackManager : NSObject
@property (nonatomic) NSMutableDictionary normalLogPassback;
@property (nonatomic) NSDictionary hotLogPassback;
@property (nonatomic) NSDictionary followLogPassback;
@property (nonatomic) NSDictionary freshLogPassback;
- (void)setFollowLogPassback:;
- (id)normalLogPassback;
- (id)freshLogPassback;
- (id)followLogPassback;
- (id)hotLogPassback;
- (void)setLogPassback:referString:;
- (id)feedLogPassbackWithReferString:;
- (void)setHotLogPassback:;
- (void)setFreshLogPassback:;
- (void)setNormalLogPassback:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
