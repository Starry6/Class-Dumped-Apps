@interface AWEECOMIMDynamicCardMediaView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIImageView coverImgView;
@property (nonatomic) AWEECOMIMDynamicFootNoteView footNoteView;
@property (nonatomic) UIImageView playIconView;
@property (nonatomic) UIImageView bgMaskView;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)coverImgView;
- (id)createImageWithMaskLayerColors:itemHeight:;
- (void)setCoverImgView:;
- (void)updateWithElememtModel:;
- (id)playIconView;
- (void)setPlayIconView:;
- (void)onTapCardBackground;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (id)footNoteView;
- (void)setFootNoteView:;
- (id)initWithFrame:;
- (void)customInit;
- (void).cxx_destruct;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
@end
