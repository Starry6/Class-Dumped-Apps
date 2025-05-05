@interface SAURIHandoffPayload : AceObject
@property (nonatomic) NSURL link;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)link;
- (id)groupIdentifier;
- (void)setLink:;
- (id)encodedClassName;
+ (id)uRIHandoffPayload;
+ (id)uRIHandoffPayloadWithDictionary:context:;
@end
