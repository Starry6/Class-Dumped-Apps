@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer
@property (nonatomic) NSNumber fileSize;
@property (nonatomic) SAUIImageResource imageResource;
- (id)fileSize;
- (id)groupIdentifier;
- (void)setFileSize:;
- (id)encodedClassName;
- (id)imageResource;
- (void)setImageResource:;
+ (id)imageLinkedAnswer;
+ (id)imageLinkedAnswerWithDictionary:context:;
@end
