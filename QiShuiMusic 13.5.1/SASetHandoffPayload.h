@interface SASetHandoffPayload : SABaseClientBoundCommand
@property (nonatomic) <SAHandoffPayload> handoffPayload;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)handoffPayload;
- (void)setHandoffPayload:;
+ (id)setHandoffPayload;
+ (id)setHandoffPayloadWithDictionary:context:;
@end
