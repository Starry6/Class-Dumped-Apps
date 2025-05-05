@interface SAGKVideoLinkedAnswer : SAGKImageLinkedAnswer
@property (nonatomic) NSNumber runtimeInMilliseconds;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)runtimeInMilliseconds;
- (void)setRuntimeInMilliseconds:;
+ (id)videoLinkedAnswer;
+ (id)videoLinkedAnswerWithDictionary:context:;
@end
