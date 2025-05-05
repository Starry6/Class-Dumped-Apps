@interface QLThumbnailServiceProxy : NSObject
- (void)dealloc;
- (id)initWithError:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)askThumbnailAdditionIndex:;
- (id)indexProxy;
- (void)touchOrAddThumbnailAddition:forURL:;
- (void)updateLastHitDateOfAddition:onPhysicalURL:;
+ (id)interface;
+ (id)sharedInstance;
+ (id)sharedInstanceWithError:;
@end
