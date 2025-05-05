@interface BDXRouter : NSObject
@property (nonatomic) NSHashTable containers;
@property (nonatomic) NSInteger currentIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openWithUrl:context:completion:;
- (id)__lifeCycleTrackerWithContext:;
- (BOOL)closeWithContainerID:params:completion:;
- (id)containerWithContainerID:;
- (id)containerWithUrl:context:autoPush:;
- (id)containerWithUrl:context:autoPush:error:;
- (id)containerWithUrl:context:openPage:openPopup:error:;
- (id)createContainerWithUrl:context:error:;
- (void)createTracertMonitorIfNeededWithContext:;
- (id)routeStack;
- (id)containers;
- (id)init;
- (void)setCurrentIndex:;
- (void)setContainers:;
- (void).cxx_destruct;
- (int)currentIndex;
+ (BOOL)__validateSourceUrl:context:error:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;
@end
