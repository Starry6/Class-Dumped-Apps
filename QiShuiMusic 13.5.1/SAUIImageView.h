@interface SAUIImageView : SAAceView
@property (nonatomic) NSArray commands;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) SAUIImageResource image;
@property (nonatomic) NSNumber tintColor;
- (id)groupIdentifier;
- (id)descriptionText;
- (id)tintColor;
- (void)setImage:;
- (id)commands;
- (id)encodedClassName;
- (void)setTintColor:;
- (void)setDescriptionText:;
- (void)setCommands:;
- (id)image;
+ (id)imageView;
+ (id)imageViewWithDictionary:context:;
@end
