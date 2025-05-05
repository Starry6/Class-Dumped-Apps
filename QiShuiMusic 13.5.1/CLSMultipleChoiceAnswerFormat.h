@interface CLSMultipleChoiceAnswerFormat : CLSAnswerFormat
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSArray answerChoiceItems;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (id)_init;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)copyWithZone:;
- (BOOL)validateObject:;
- (id)answerChoiceItems;
- (void)addAnswerItem:;
- (void)removeAnswerItem:;
- (BOOL)answerChoiceArraysEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
