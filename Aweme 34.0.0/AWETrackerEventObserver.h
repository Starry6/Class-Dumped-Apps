@interface AWETrackerEventObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onEventStored:;
- (void)onEventUploaded:;
- (void)onEventInitialized:;
- (void)onEventDiscarded:withError:;
- (id)observerQueue;
- (id)init;
+ (void)onHostEventAccept:params:;
+ (id)plugin;
+ (id)pluginVersion;
@end
