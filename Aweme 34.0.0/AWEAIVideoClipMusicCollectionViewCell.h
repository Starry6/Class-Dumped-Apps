@interface AWEAIVideoClipMusicCollectionViewCell : AWEPhotoMusicEditorCollectionViewCell
@property (nonatomic) AWEScrollStringLabel scrollSrtingLabel;
@property (nonatomic) NSString musicName;
@property (nonatomic) CAGradientLayer fadeLayer;
- (void)setMusicName:;
- (id)musicName;
- (void)setupOptimization;
- (void)setScrollSrtingLabel:;
- (id)scrollSrtingLabel;
- (void)updateFadeLayerColorWithCurrent:;
- (void)setIsCurrent:animated:completion:;
- (void)updateTitleViewState:animated:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (void)updateText:;
- (id)fadeLayer;
- (void)setFadeLayer:;
@end
