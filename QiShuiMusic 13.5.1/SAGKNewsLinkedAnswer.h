@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer
@property (nonatomic) NSDate publicationDate;
@property (nonatomic) NSString source;
- (id)groupIdentifier;
- (void)setPublicationDate:;
- (id)publicationDate;
- (id)encodedClassName;
- (id)source;
- (void)setSource:;
+ (id)newsLinkedAnswer;
+ (id)newsLinkedAnswerWithDictionary:context:;
@end
