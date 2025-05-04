@interface AWEECOMIMDynamicCardPlaceHolderTextTagView : UIView
@property (nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView bkgView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) @? clickActionBlock;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setClickActionBlock:;
- (id)clickActionBlock;
- (id)bkgView;
- (void)setBkgView:;
- (void)onTapView;
- (void)updateViewWithTagModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithTagModel:;
@end
