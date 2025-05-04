@interface AWELivePadServiceImpl : NSObject
@property (nonatomic) BOOL hasReleasePages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasReleasePages;
- (void)setHasReleasePages:;
- (void)startObserverMemory;
- (void)stopObserverMemory;
- (id)aAWEPadReleasePagesAdapter;
- (void)innerFeedWillAppear;
- (void)innerFeedDidAppear;
- (void)innerFeedWillDisappear;
- (void)innerFeedDidDisappear;
- (id)aAWEPadPlayerReleaseAdapter;
- (void)releaseMiddlePages;
- (void)trackReleaseMiddlePages:;
+ (Class)aAWEPadReleasePagesAdapterClass;
+ (Class)aAWEPadPlayerReleaseAdapterClass;
@end
