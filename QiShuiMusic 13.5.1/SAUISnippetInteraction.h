@interface SAUISnippetInteraction : SABaseCommand
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString snippetId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)requestId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setRequestId:;
- (id)snippetId;
- (void)setSnippetId:;
+ (id)snippetInteraction;
+ (id)snippetInteractionWithDictionary:context:;
@end
