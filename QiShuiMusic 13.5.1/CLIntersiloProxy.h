@interface CLIntersiloProxy : NSProxy
@property (nonatomic) <CLIntersiloProxyDelegateProtocol> delegate;
@property (nonatomic) CLSilo delegateSilo;
- (id)init;
- (id)peer;
- (void)setDelegateEntityName:;
- (BOOL)offsiloHandleInvocation:selectorInfo:peer:;
- (id)methodSignatureForSelector:;
- (id)delegateSilo;
- (id)delegate;
- (id)initWithDelegateObject:delegateSilo:;
- (void).cxx_destruct;
- (id)description;
- (void)registerDelegate:inSilo:;
- (void)forwardInvocation:;
+ (Class)recipientRepresentingClass;
+ (Class)initiatorRepresentingClass;
+ (id)proxyForRecipientObject:inSilo:recipientName:;
@end
