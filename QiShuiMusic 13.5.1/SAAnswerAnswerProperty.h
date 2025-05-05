@interface SAAnswerAnswerProperty : AceObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) NSString valueAnnotation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)name;
- (id)valueAnnotation;
- (void)setValueAnnotation:;
+ (id)answerProperty;
+ (id)answerPropertyWithDictionary:context:;
@end
