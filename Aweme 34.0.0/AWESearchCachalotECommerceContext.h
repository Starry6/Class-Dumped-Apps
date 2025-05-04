@interface AWESearchCachalotECommerceContext : AWESearchCachalotResultContext
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager filterManager;
@property (nonatomic) <AWESearchECardTracker> eCardTracker;
@property (nonatomic) <AWESearchWordProtocol><AWESearchMerchandiseTextTagCellDelegate><AWESearchMerchandiseUserWindowCellDelegate><AWESearchECommerceGuideSearchStyleDelegate><AWESearchECommerceEnvironmentBKGDelegate><AWEMerchandiseComponentCellDelegate><AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> bizDelegate;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (id)bizDelegate;
- (void)setBizDelegate:;
- (id)filterManager;
- (void)setFilterManager:;
- (id)eCardTracker;
- (void)setECardTracker:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
