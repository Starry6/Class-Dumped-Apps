@interface MKWalletMerchantResponse : NSObject
@property (nonatomic) MKWalletMerchantStylingInfo placeStyling;
@property (nonatomic) NSString localizedPlaceName;
@property (nonatomic) NSString localizedPlaceLanguage;
@property (nonatomic) MKWalletMerchantStylingInfo walletCategoryStyling;
@property (nonatomic) NSString localizedWalletCategoryName;
@property (nonatomic) NSString localizedWalletCategoryLanguage;
@property (nonatomic) NSString walletCategoryIdentifier;
@property (nonatomic) NSString mapsCategoryIdentifier;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) NSString heroImageProviderName;
- (id)mapItem;
- (void).cxx_destruct;
- (id)walletCategoryStyling;
- (id)walletCategoryIdentifier;
- (id)initWithGEOMapItem:;
- (id)initWithMerchantLookupResult:;
- (id)placeStyling;
- (id)localizedPlaceName;
- (id)localizedPlaceLanguage;
- (id)localizedWalletCategoryName;
- (id)localizedWalletCategoryLanguage;
- (id)mapsCategoryIdentifier;
- (id)bestHeroImageForSize:allowSmaller:;
- (id)heroImageProviderName;
@end
