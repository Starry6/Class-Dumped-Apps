@interface IESECStoreAccountInfoModel : NSObject
@property (nonatomic) BOOL showAccountInfo;
@property (nonatomic) IESECShopValueInfoItem fansValueItem;
@property (nonatomic) IESECShopValueInfoItem salesValueItem;
@property (nonatomic) IESECShopValueInfoItem diversityValueItem;
@property (nonatomic) NSString iconBundleName;
@property (nonatomic) BOOL iconLeft;
@property (nonatomic) BOOL diversityItemSmallFont;
@property (nonatomic) BOOL newVersion;
@property (nonatomic) BOOL useGenericStyle;
@property (nonatomic) NSArray valueInfoItems;
- (BOOL)showAccountInfo;
- (BOOL)useGenericStyle;
- (BOOL)diversityItemSmallFont;
- (id)diversityValueItem;
- (id)fansValueItem;
- (id)iconBundleName;
- (BOOL)iconLeft;
- (id)salesValueItem;
- (void)setDiversityItemSmallFont:;
- (void)setDiversityValueItem:;
- (void)setFansValueItem:;
- (void)setIconBundleName:;
- (void)setIconLeft:;
- (void)setSalesValueItem:;
- (void)setShowAccountInfo:;
- (void)setUseGenericStyle:;
- (void)setValueInfoItems:;
- (id)valueInfoItems;
- (void).cxx_destruct;
- (void)setNewVersion:;
- (BOOL)newVersion;
@end
