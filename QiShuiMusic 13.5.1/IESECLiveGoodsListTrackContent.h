@interface IESECLiveGoodsListTrackContent : NSObject
@property (nonatomic) BOOL curCouponGoodsList;
@property (nonatomic) NSString scene;
@property (nonatomic) double curClickTime;
@property (nonatomic) double firstClickTime;
@property (nonatomic) Q showedTimes;
- (void)setShowedTimes:;
- (double)curClickTime;
- (BOOL)curCouponGoodsList;
- (double)firstClickTime;
- (void)setCurClickTime:;
- (void)setCurCouponGoodsList:;
- (void)setFirstClickTime:;
- (unsigned long long)showedTimes;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
@end
