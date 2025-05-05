@interface CJPayRouter : NSObject
@property (nonatomic) NSMutableDictionary routes;
- (void)addURLPattern:andObjectHandler:;
- (id)addURLPattern:;
- (void)addURLPattern:andHandler:;
- (id)extractParametersFromURL:matchExactly:;
- (id)pathComponentsFromURL:;
- (void)removeURLPattern:;
- (id)routes;
- (void).cxx_destruct;
- (void)setRoutes:;
+ (BOOL)canOpenURL:matchExactly:;
+ (BOOL)checkIfContainsSpecialCharacter:;
+ (void)deregisterURLPattern:;
+ (id)generateURLWithPattern:parameters:;
+ (id)objectForURL:withUserInfo:;
+ (void)openURL:withUserInfo:completion:;
+ (void)registerURLPattern:toHandler:;
+ (void)registerURLPattern:toObjectHandler:;
+ (void)openURL:;
+ (BOOL)canOpenURL:;
+ (id)sharedInstance;
+ (void)openURL:completion:;
+ (id)objectForURL:;
@end
