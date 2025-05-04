@interface AWESearchGoodsTagInfoView : UIView
@property (nonatomic) AWESearchGoodsTagInfoConfiguration config;
- (id)initWithTagInfos:config:completion:;
- (void)downloadTagWithTagInfos:completion:;
- (id)initWithTagInfos:config:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
+ (id)sizeForTagInfos:config:;
@end
