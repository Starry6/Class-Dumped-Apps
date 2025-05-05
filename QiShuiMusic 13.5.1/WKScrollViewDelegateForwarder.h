@interface WKScrollViewDelegateForwarder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (id)initWithInternalDelegate:externalDelegate:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (id).cxx_construct;
@end
