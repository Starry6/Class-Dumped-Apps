@interface AWENearbyPOILynxCardCellCollectionViewCell : UICollectionViewCell
@property (nonatomic) <AWEPOINearbyLynxCardManager> lynxCardManager;
@property (nonatomic) q cardType;
@property (nonatomic) q indexToInsert;
- (void)configWithModel:extraParams:;
- (void)broadcastEventWithEventType:;
- (long long)indexToInsert;
- (void)setIndexToInsert:;
- (id)lynxCardManager;
- (void)setLynxCardManager:;
- (void).cxx_destruct;
- (long long)cardType;
- (void)setCardType:;
@end
