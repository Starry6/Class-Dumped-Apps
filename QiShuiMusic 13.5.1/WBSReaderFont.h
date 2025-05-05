@interface WBSReaderFont : NSObject
@property (nonatomic) NSString familyName;
@property (nonatomic) NSString familyNameForWebContent;
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL installed;
@property (nonatomic) q type;
- (id)fontOfSize:;
- (void)isInstalledWithCompletionHandler:;
- (BOOL)isInstalled;
- (id)familyName;
- (unsigned long long)hash;
- (id)displayName;
- (id)_localizedName;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithFamilyName:displayName:type:;
- (id)familyNameForWebContent;
- (id)_fontDescriptorRefForFontFamilyName:restrictToEnabled:;
+ (id)systemFont;
+ (id)fontWithFamilyName:displayName:;
+ (id)systemSerifFont;
+ (id)systemFontWithDisplayName:;
@end
