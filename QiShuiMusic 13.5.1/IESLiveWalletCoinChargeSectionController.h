@interface IESLiveWalletCoinChargeSectionController : IGListSectionController
@property (nonatomic) IESLiveWalletMyCoinItem coinItem;
@property (nonatomic) NSDictionary trackInfo;
- (void)trackViewAppear;
- (void)updateSessionID;
- (id)cellForItemAtIndex:;
- (id)coinItem;
- (void)didUpdateToObject:;
- (id)initWithTrackInfo:;
- (void)setCoinItem:;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)trackInfo;
- (void)setTrackInfo:;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
