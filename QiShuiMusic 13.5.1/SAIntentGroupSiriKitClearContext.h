@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand
@property (nonatomic) NSString reason;
- (id)groupIdentifier;
- (id)initWithReason:;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)siriKitClearContext;
+ (id)siriKitClearContextWithDictionary:context:;
+ (id)siriKitClearContextWithReason:;
@end
