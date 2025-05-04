@interface AWESearchCachalotResultStoreContext : AWESearchCachalotResultContext
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) double userWindowLeftRightPadding;
@property (nonatomic) double userWindowTopPadding;
@property (nonatomic) <AWEMerchandiseComponentCellDelegate><AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> bizDelegate;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (id)bizDelegate;
- (void)setBizDelegate:;
- (double)userWindowLeftRightPadding;
- (void)setUserWindowLeftRightPadding:;
- (double)userWindowTopPadding;
- (void)setUserWindowTopPadding:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
