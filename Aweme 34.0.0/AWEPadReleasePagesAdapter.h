@interface AWEPadReleasePagesAdapter : NSObject
@property (nonatomic) BOOL isRegisterMemoryObserver;
@property (nonatomic) @? shouldReleasePages;
@property (nonatomic) NSArray supportReleaseMiddlePagesScenes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startObserverMemory;
- (void)stopObserverMemory;
- (id)shouldReleasePages;
- (void)setShouldReleasePages:;
- (id)supportReleaseMiddlePagesScenes;
- (void)setSupportReleaseMiddlePagesScenes:;
- (BOOL)isRegisterMemoryObserver;
- (void)memoryLevelChanged:;
- (void)setIsRegisterMemoryObserver:;
- (void)performAction:;
- (void).cxx_destruct;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (BOOL)enable;
@end
