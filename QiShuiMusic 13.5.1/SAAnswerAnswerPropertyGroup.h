@interface SAAnswerAnswerPropertyGroup : AceObject
@property (nonatomic) NSArray answerProperties;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)answerProperties;
- (void)setAnswerProperties:;
+ (id)answerPropertyGroup;
+ (id)answerPropertyGroupWithDictionary:context:;
@end
