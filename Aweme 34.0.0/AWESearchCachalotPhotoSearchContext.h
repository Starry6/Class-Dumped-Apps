@interface AWESearchCachalotPhotoSearchContext : AWESearchCachalotResultContext
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager filterManager;
@property (nonatomic) <AWEMerchandiseComponentCellDelegate><AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> bizDelegate;
- (id)bizDelegate;
- (void)setBizDelegate:;
- (id)filterManager;
- (void)setFilterManager:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
