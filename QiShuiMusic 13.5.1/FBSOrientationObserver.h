@interface FBSOrientationObserver : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)activeInterfaceOrientation;
- (id)init;
- (void)dealloc;
- (void)handleOrientationResetForClient:;
- (void)setHandler:;
- (id)_getAndSetFreshestUpdateGivenUpdate:;
- (void)client:handleOrientationUpdate:;
- (id)handler;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationWithCompletion:;
- (void)invalidate;
@end
