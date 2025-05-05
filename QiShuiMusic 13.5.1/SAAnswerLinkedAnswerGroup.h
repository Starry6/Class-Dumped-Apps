@interface SAAnswerLinkedAnswerGroup : AceObject
@property (nonatomic) NSArray linkedAnswers;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)linkedAnswers;
- (void)setLinkedAnswers:;
+ (id)linkedAnswerGroup;
+ (id)linkedAnswerGroupWithDictionary:context:;
@end
