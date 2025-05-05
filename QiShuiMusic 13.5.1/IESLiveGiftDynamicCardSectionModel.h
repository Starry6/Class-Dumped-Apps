@interface IESLiveGiftDynamicCardSectionModel : NSObject
@property (nonatomic) NSNumber giftID;
@property (nonatomic) Q cardType;
@property (nonatomic) HTSLiveSeriesGiftsInfo seriesGiftsInfo;
- (id)seriesGiftsInfo;
- (id)giftID;
- (void)setGiftID:;
- (void)setSeriesGiftsInfo:;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:;
@end
