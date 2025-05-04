@interface AWEStickerCommerceEnterView : UIView
@property (nonatomic) UIImageView stickerImage;
@property (nonatomic) UIButton enterButton;
@property (nonatomic) UILabel enterLabel;
@property (nonatomic) UIImageView arrowImage;
@property (nonatomic) IESEffectModel effectModel;
- (id)effectModel;
- (void)setEffectModel:;
- (id)enterButton;
- (void)setEnterButton:;
- (void)setEnterLabel:;
- (id)enterLabel;
- (void)updateStickerDataWithEffectModel:;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)arrowImage;
- (void)setArrowImage:;
- (void)setStickerImage:;
- (id)stickerImage;
@end
