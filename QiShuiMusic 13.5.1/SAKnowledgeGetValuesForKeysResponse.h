@interface SAKnowledgeGetValuesForKeysResponse : SABaseCommand
@property (nonatomic) NSArray entries;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEntries:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)entries;
+ (id)getValuesForKeysResponse;
+ (id)getValuesForKeysResponseWithDictionary:context:;
@end
