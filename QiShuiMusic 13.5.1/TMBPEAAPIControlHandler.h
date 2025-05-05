@interface TMBPEAAPIControlHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdPolicyDidEndInvokeAPI:context:;
- (id)bdPolicyWillInvokeAPI:context:;
- (void)sendErrorEventWithContext:andResult:;
@end
