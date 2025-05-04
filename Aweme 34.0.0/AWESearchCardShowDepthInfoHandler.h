@interface AWESearchCardShowDepthInfoHandler : NSObject
@property (nonatomic) q deepestRank;
@property (nonatomic) NSMapTable deepCardShowPercentTable;
@property (nonatomic) NSMapTable cardShowInfoTable;
- (void)resetShowInfoData;
- (double)calculateVisibleCardShowPercent:cardFrame:;
- (BOOL)isNotViewedCard:cardFrame:;
- (id)deepCardShowPercentTable;
- (id)cardShowInfoTable;
- (long long)deepestRank;
- (BOOL)isSingleColumn:cardFrame:;
- (void)setDeepestRank:;
- (void)updateDeepestPercentWithCard:cardFrame:cardRank:view:;
- (void)setDeepCardShowPercentTable:;
- (void)setCardShowInfoTable:;
- (void)trackCardAmpleShowWithParams:;
- (id)init;
- (void).cxx_destruct;
@end
