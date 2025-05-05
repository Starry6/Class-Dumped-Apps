@interface QLWaveformView : UIView
@property (nonatomic) AVAsset asset;
@property (nonatomic) UIImage placeholderImage;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPlaceholderImage:;
- (void)setVisibleRect:;
- (id)visibleRect;
- (void)layoutSubviews;
- (id)asset;
- (id)placeholderImage;
- (void)updateImage;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)_expandWaveform;
- (void)_updateWithWaveformImage:;
@end
