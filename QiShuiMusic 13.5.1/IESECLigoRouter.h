@interface IESECLigoRouter : NSObject
@property (nonatomic) NSMutableDictionary routeMap;
- (id)routeMap;
- (void)setRouteMap:;
- (void).cxx_destruct;
+ (id)loadTemplatePath:model:completion:;
+ (void)registerLigoRouter:handler:;
+ (id)sharedInstance;
@end
