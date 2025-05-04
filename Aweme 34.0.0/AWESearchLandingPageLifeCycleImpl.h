@interface AWESearchLandingPageLifeCycleImpl : NSObject
@property (nonatomic) double enterTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerDidCreated:view:;
- (void)containerWillDestory:;
- (void)containerOnShow:sourceParam:;
- (void)containerDidClose:;
- (id)schemeParamsWithContainer:;
- (double)enterTime;
- (void)setEnterTime:;
+ (id)createServiceWithURL:;
@end
