@interface AWESearchBarContainerConfig : NSObject
@property (nonatomic) q enableSearchBarHotSpotAreaOpt;
@property (nonatomic) AWESearchBarContainerBtnHotSpotConfig searchBtnHotSpotArea;
@property (nonatomic) AWESearchBarContainerBtnHotSpotConfig clearBtnHotSpotArea;
@property (nonatomic) AWESearchBarContainerBtnHotSpotConfig returnBtnHotSpotArea;
@property (nonatomic) AWESearchBarContainerBtnHotSpotConfig scanBtnHotSpotArea;
- (void)fetchHotSpotConfig;
- (long long)searchBarHotSpotAreaOptExp;
- (void)setEnableSearchBarHotSpotAreaOpt:;
- (id)searchBtnHotSpotAreaDic;
- (void)setSearchBtnHotSpotArea:;
- (id)clearBtnHotSpotAreaDic;
- (void)setClearBtnHotSpotArea:;
- (id)scanBtnHotSpotAreaDic;
- (void)setScanBtnHotSpotArea:;
- (id)returnBtnHotSpotAreaDic;
- (void)setReturnBtnHotSpotArea:;
- (long long)enableSearchBarHotSpotAreaOpt;
- (id)searchBtnHotSpotArea;
- (id)clearBtnHotSpotArea;
- (id)returnBtnHotSpotArea;
- (id)scanBtnHotSpotArea;
- (id)init;
- (void).cxx_destruct;
@end
