@interface SASiriPresentationClientState : SAAceClientState
@property (nonatomic) BOOL isFullScreen;
- (BOOL)isFullScreen;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setIsFullScreen:;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)siriPresentationClientState;
+ (id)siriPresentationClientStateWithDictionary:context:;
@end
