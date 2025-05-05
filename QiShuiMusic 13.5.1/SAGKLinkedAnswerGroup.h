@interface SAGKLinkedAnswerGroup : AceObject
@property (nonatomic) NSArray linkedAnswers;
@property (nonatomic) NSNumber numberOfResults;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)numberOfResults;
- (void)setNumberOfResults:;
- (id)linkedAnswers;
- (void)setLinkedAnswers:;
+ (id)linkedAnswerGroup;
+ (id)linkedAnswerGroupWithDictionary:context:;
@end
