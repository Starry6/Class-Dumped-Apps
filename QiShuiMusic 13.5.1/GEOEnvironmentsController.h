@interface GEOEnvironmentsController : NSObject
@property (nonatomic) <GEOEnvironmentsControllerDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)reloadEnvironments;
- (id)initEnablingCustomEnvironments:;
- (void)reloadEnvironments:;
- (id)environmentInfosForSection:;
- (void)addCustomEnvironment:;
- (void)removeCustomEnvironment:;
- (id)activeEnvironment;
@end
