@interface AWELiveAudienceViewControllerDelegateProxy : NSObject
@property (nonatomic) <AWELiveAudienceViewControllerDelegate> outDelegate;
@property (nonatomic) Protocol proto;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProto:;
- (BOOL)isLiveProtocol:;
- (id)outDelegate;
- (void)setOutDelegate:;
- (id)initWithDelegate:;
- (BOOL)respondsToSelector:;
- (BOOL)conformsToProtocol:;
- (id)proto;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
+ (id)methodSignatureOfProtocol:with:;
@end
