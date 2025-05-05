@interface ABUMediaBidResult : NSObject
@property (nonatomic) BOOL win;
@property (nonatomic) q winnerPrice;
@property (nonatomic) NSString lossDescription;
@property (nonatomic) NSString winnerAdnID;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) @ originNativeAdData;
- (id)lossDescription;
- (void)setWin:;
- (void)setWinnerPrice:;
- (BOOL)win;
- (void)setExt:;
- (void)setWinnerAdnID:;
- (id)originNativeAdData;
- (void)setLossDescription:;
- (void)setOriginNativeAdData:;
- (id)winnerAdnID;
- (long long)winnerPrice;
- (BOOL)isMemberOfClass:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)ext;
@end
