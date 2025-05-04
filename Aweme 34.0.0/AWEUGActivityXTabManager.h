@interface AWEUGActivityXTabManager : NSObject
@property (nonatomic) NSPointerArray weakContainers;
- (BOOL)isActivityTabShowing;
- (void)addViewController:;
- (id)xTabSchemas;
- (BOOL)showingXTabDisableClientShake;
- (id)weakContainers;
- (void)setWeakContainers:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
