@interface SAAnswerLinkedAnswer : AceObject
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSURL image;
@property (nonatomic) NSURL link;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)link;
- (void)setName:;
- (id)groupIdentifier;
- (id)descriptionText;
- (void)setLink:;
- (void)setImage:;
- (id)encodedClassName;
- (void)setDescriptionText:;
- (id)name;
- (id)image;
+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:context:;
@end
