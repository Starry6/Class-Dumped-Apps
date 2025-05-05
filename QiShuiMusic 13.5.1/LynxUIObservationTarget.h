@interface LynxUIObservationTarget : NSObject
@property (nonatomic) LynxUI ui;
@property (nonatomic) q jsCallbackId;
@property (nonatomic) IntersectionObserverEntry entry;
- (long long)jsCallbackId;
- (void)setJsCallbackId:;
- (id)entry;
- (void).cxx_destruct;
- (id)ui;
- (void)setEntry:;
- (void)setUi:;
@end
