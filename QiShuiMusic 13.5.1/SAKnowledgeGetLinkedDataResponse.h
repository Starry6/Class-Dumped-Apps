@interface SAKnowledgeGetLinkedDataResponse : SABaseCommand
@property (nonatomic) NSArray result;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setResult:;
+ (id)getLinkedDataResponse;
+ (id)getLinkedDataResponseWithDictionary:context:;
@end
