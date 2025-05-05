@interface CNPhotoPickerConfiguration : NSObject
@property (nonatomic) BOOL includeContactImage;
@property (nonatomic) BOOL includeUnifiedContactImages;
@property (nonatomic) BOOL includeFaces;
@property (nonatomic) BOOL includeMonograms;
@property (nonatomic) BOOL includeAnimoji;
@property (nonatomic) BOOL includeRecents;
@property (nonatomic) BOOL includeEmoji;
@property (nonatomic) BOOL allowPhotoCapture;
@property (nonatomic) BOOL allowPhotoFromLibrary;
@property (nonatomic) BOOL allowAnimojiCreation;
@property (nonatomic) BOOL allowRotation;
- (BOOL)includeFaces;
- (BOOL)allowRotation;
- (BOOL)includeUnifiedContactImages;
- (BOOL)includeContactImage;
- (BOOL)includeMonograms;
- (BOOL)includeAnimoji;
- (BOOL)includeRecents;
- (id)configurationBySettingAllowsPhotoCapture:;
- (id)initWithIncludeContactImage:includeUnifiedContactImages:includeFaces:includeMonograms:includeAnimoji:includeRecents:includeEmoji:allowPhotoCapture:allowPhotoFromLibrary:allowAnimojiCreation:allowRotation:;
- (BOOL)includeEmoji;
- (BOOL)allowPhotoCapture;
- (BOOL)allowPhotoFromLibrary;
- (BOOL)allowAnimojiCreation;
+ (id)defaultConfiguration;
+ (id)contactsConfiguration;
+ (id)gameCenterConfiguration;
@end
