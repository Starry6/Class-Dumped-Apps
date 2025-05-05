@interface SAKnowledgeSetLinkedData : SABaseClientBoundCommand
@property (nonatomic) NSArray linkedData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)linkedData;
- (void)setLinkedData:;
+ (id)setLinkedData;
+ (id)setLinkedDataWithDictionary:context:;
@end
