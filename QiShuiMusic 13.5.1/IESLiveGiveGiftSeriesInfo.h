@interface IESLiveGiveGiftSeriesInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray giftList;
@property (nonatomic) NSArray seriesGiftMapList;
@property (nonatomic) NSNumber totalDiamondCount;
- (id)giftList;
- (id)seriesGiftMapList;
- (void)setGiftList:;
- (void)setSeriesGiftMapList:;
- (void)setTotalDiamondCount:;
- (id)totalDiamondCount;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
@end
