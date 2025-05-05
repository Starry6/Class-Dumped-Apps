@interface MCFontPayload : MCPayload
@property (nonatomic) NSData fontData;
@property (nonatomic) NSString name;
@property (nonatomic) NSURL persistentURL;
- (void)setName:;
- (id)title;
- (void).cxx_destruct;
- (id)name;
- (id)verboseDescription;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)fontData;
- (void)setFontData:;
- (id)persistentURL;
- (void)setPersistentURL:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
