@interface AWEMusicStreamingImpl.LunaPurchOfferRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString offerID;
@property (nonatomic) q settleMethod;
@property (nonatomic) NSString SettleItemID;
@property (nonatomic) q settleItemType;
@property (nonatomic) q quantity;
- (void)setOfferID:;
- (id)SettleItemID;
- (void)setSettleItemID:;
- (long long)settleItemType;
- (void)setSettleItemType:;
- (long long)settleMethod;
- (Class)responseModelClass;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (void)setQuantity:;
- (id)params;
- (long long)quantity;
- (id)offerID;
@end
