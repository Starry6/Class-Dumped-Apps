@interface UIShortcutActivity : UIApplicationExtensionActivity
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString singleUseToken;
@property (nonatomic) NSString name;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber sortValue;
@property (nonatomic) NSArray photosAssetIdentifiers;
- (id)activityTitle;
- (id)activityType;
- (void)setName:;
- (id)identifier;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)name;
- (id)iconImage;
- (void)setIdentifier:;
- (id)_actionImage;
- (long long)_defaultSortGroup;
- (void)prepareWithActivityExtensionItemData:;
- (id)photosAssetIdentifiers;
- (id)initWithPartial:;
- (id)initPartialShortcutWithName:identifier:image:sortValue:;
- (id)initWithApplicationExtension:singleUseToken:photosAssetIdentifiers:;
- (id)sortValue;
- (void)setSortValue:;
- (id)singleUseToken;
- (void)setSingleUseToken:;
- (void)setPhotosAssetIdentifiers:;
@end
