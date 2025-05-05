@interface MCSingleAppPayload : MCAppWhitelistPayloadBase
@property (nonatomic) NSString applicationBundleID;
@property (nonatomic) BOOL allowLogout;
- (id)applicationBundleID;
- (id)restrictions;
- (id)initWithDictionary:profile:outError:;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (BOOL)mustInstallNonInteractively;
- (BOOL)allowLogout;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
