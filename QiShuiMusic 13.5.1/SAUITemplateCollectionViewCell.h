@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem
@property (nonatomic) NSArray monogramName;
@property (nonatomic) BOOL sizeToFitImage;
@property (nonatomic) NSString subtitleText;
@property (nonatomic) NSArray themeImages;
@property (nonatomic) NSString titleText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTitleText:;
- (id)titleText;
- (id)groupIdentifier;
- (id)subtitleText;
- (void)setSubtitleText:;
- (id)encodedClassName;
- (id)themeImages;
- (void)setThemeImages:;
- (id)monogramName;
- (void)setMonogramName:;
- (BOOL)sizeToFitImage;
- (void)setSizeToFitImage:;
+ (id)collectionViewCell;
+ (id)collectionViewCellWithDictionary:context:;
@end
