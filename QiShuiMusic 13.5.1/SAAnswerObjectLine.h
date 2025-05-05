@interface SAAnswerObjectLine : AceObject
@property (nonatomic) NSURL image;
@property (nonatomic) NSNumber imageInverted;
@property (nonatomic) SAUIImageResource imageResource;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setText:;
- (void)setImage:;
- (id)encodedClassName;
- (id)text;
- (id)image;
- (id)imageResource;
- (void)setImageResource:;
- (id)imageInverted;
- (void)setImageInverted:;
+ (id)objectLine;
+ (id)objectLineWithDictionary:context:;
@end
