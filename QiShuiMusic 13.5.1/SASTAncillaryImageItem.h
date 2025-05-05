@interface SASTAncillaryImageItem : AceObject
@property (nonatomic) SAUINanoImageResource imageResource;
@property (nonatomic) SAUIDecoratedText subtitle;
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)subtitle;
- (id)imageResource;
- (void)setImageResource:;
+ (id)ancillaryImageItem;
+ (id)ancillaryImageItemWithDictionary:context:;
@end
