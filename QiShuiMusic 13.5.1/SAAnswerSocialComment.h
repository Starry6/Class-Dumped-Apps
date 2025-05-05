@interface SAAnswerSocialComment : AceObject
@property (nonatomic) NSString author;
@property (nonatomic) NSDate date;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setText:;
- (id)author;
- (id)date;
- (id)encodedClassName;
- (void)setAuthor:;
- (void)setDate:;
- (id)text;
+ (id)socialComment;
+ (id)socialCommentWithDictionary:context:;
@end
