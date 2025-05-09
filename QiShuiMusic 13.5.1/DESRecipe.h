@interface DESRecipe : NSObject
@property (nonatomic) NSArray attachments;
@property (nonatomic) NSArray attachmentSignatures;
@property (nonatomic) NSArray attachmentPaths;
@property (nonatomic) NSDictionary parametersUsed;
@property (nonatomic) NSString recipeID;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL transportIsDedisco;
@property (nonatomic) NSString privacyIdentifier;
@property (nonatomic) NSString privacyIdentifierExt;
@property (nonatomic) NSDictionary predicate;
@property (nonatomic) NSDictionary recipeUserInfo;
@property (nonatomic) NSData certificate;
@property (nonatomic) BOOL pluginShouldAddNoiseAndEncryptResult;
@property (nonatomic) BOOL useSparsification;
@property (nonatomic) BOOL useAggregatableMetadata;
@property (nonatomic) BOOL useAdaptiveClipping;
@property (nonatomic) NSNumber maxNorm;
@property (nonatomic) NSNumber normBinCount;
- (id)bundleIdentifier;
- (void)setRecipeID:;
- (id)initWithCoder:;
- (id)predicate;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (id)recipeID;
- (id)certificate;
- (void).cxx_destruct;
- (void)setAttachments:;
- (id)description;
- (id)attachments;
- (id)copyWithZone:;
- (void)setAttachmentPaths:;
- (id)attachmentPaths;
- (id)recipeUserInfo;
- (id)maxNorm;
- (id)normBinCount;
- (id)_inithWithContentsOfFile:recipeID:bundleIdentifier:error:;
- (id)_initWithRecipeUserInfo:recipeID:bundleIdentifier:;
- (id)_initWithRecipeUserInfo:recipeID:bundleIdentifier:predicate:;
- (id)_initWithAssetURL:bundleIdentifier:error:;
- (id)_initWithRecipeResponse:recipeID:bundleIdentifier:error:;
- (BOOL)transportIsDedisco;
- (BOOL)pluginShouldAddNoiseAndEncryptResult;
- (id)privacyIdentifier;
- (id)privacyIdentifierExt;
- (id)haruspexKeyWithError:;
- (BOOL)useSparsification;
- (BOOL)useAggregatableMetadata;
- (BOOL)useAdaptiveClipping;
- (id)attachmentSignatures;
- (void)setAttachmentSignatures:;
- (id)parametersUsed;
+ (BOOL)supportsSecureCoding;
+ (BOOL)transportIsDedisco:;
+ (BOOL)pluginShouldAddNoiseAndEncryptResult:;
+ (BOOL)useSparsification:;
+ (BOOL)_hasValidClippingBounds:matchValidNumChunks:;
+ (BOOL)useAggregatableMetadata:;
+ (BOOL)useAdaptiveClipping:;
@end
