@interface SASessionHandoffPayload : AceObject
@property (nonatomic) NSData sessionHandoffData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)sessionHandoffData;
- (void)setSessionHandoffData:;
+ (id)sessionHandoffPayload;
+ (id)sessionHandoffPayloadWithDictionary:context:;
@end
