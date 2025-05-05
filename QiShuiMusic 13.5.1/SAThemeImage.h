@interface SAThemeImage : SADomainObject
@property (nonatomic) NSString appearanceSetting;
@property (nonatomic) NSData dynamicImage;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)appearanceSetting;
- (void)setAppearanceSetting:;
- (id)dynamicImage;
- (void)setDynamicImage:;
+ (id)themeImage;
+ (id)themeImageWithDictionary:context:;
@end
