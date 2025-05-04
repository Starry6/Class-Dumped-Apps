@interface AWELiveStickerCardViewModel : NSObject
@property (nonatomic) NSDictionary originCardData;
@property (nonatomic) AWELiveLocalLifeStickerDataModel model;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (id)originCardData;
- (void)setOriginCardData:;
- (void)p_trackerWithEvent:params:btmInfo:;
- (id)initWithCardModel:awemeModel:originCardData:;
- (void)updateCardModel:originCardData:;
- (id)model;
- (void).cxx_destruct;
@end
