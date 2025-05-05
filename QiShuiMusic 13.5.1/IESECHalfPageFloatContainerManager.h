@interface IESECHalfPageFloatContainerManager : NSObject
@property (nonatomic) NSMutableArray containerStores;
- (id)containerStores;
- (void)p_containerDelegate:handleContainer:showResult:;
- (void)refreshCurrentContainers;
- (void)requireToShow:delegate:;
- (void)setContainerStores:;
- (id)containers;
- (id)init;
- (void).cxx_destruct;
- (void)removeContainer:;
+ (id)sharedInstance;
@end
