@interface BUMMediaBidResult : BUInterfaceBaseObject
@property (nonatomic) BUMMediaBidResult iteration;
@property (nonatomic) BOOL win;
@property (nonatomic) q winnerPrice;
@property (nonatomic) NSString lossDescription;
@property (nonatomic) NSString winnerAdnID;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) @ originNativeAdData;
- (id)lossDescription;
- (BOOL)win;
- (id)originNativeAdData;
- (id)winnerAdnID;
- (long long)winnerPrice;
- (id)init;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
- (id)ext;
@end
