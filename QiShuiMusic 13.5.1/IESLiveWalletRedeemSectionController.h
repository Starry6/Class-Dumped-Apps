@interface IESLiveWalletRedeemSectionController : IGListSectionController
@property (nonatomic) IESLiveWalletRedeemItem redeemItem;
@property (nonatomic) NSDictionary trackInfo;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)initWithTrackInfo:;
- (id)redeemItem;
- (void)setRedeemItem:;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)trackInfo;
- (void)setTrackInfo:;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
