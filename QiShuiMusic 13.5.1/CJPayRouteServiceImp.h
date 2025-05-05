@interface CJPayRouteServiceImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)i_openScheme:callBack:;
- (BOOL)i_openScheme:withDelegate:;
- (BOOL)p_canOpenScheme:;
+ (void)p_registerRouters;
+ (void)registerComponents;
@end
