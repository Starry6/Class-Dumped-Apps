@interface AWEEcomSearchGoodsTagInfoView : UIView
@property (nonatomic) AWEEcomSearchGoodsTagInfoConfiguration config;
- (id)initWithTagInfos:config:completion:;
- (void)downloadTagWithTagInfos:completion:;
- (id)initWithTagInfos:config:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
+ (id)sizeForTagInfos:config:;
@end
