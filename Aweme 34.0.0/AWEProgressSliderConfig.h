@interface AWEProgressSliderConfig : NSObject
@property (nonatomic) UIColor minTrackColor;
@property (nonatomic) UIColor maxTrackColor;
@property (nonatomic) UIImage thumbImage;
@property (nonatomic) double sliderHeight;
@property (nonatomic) double lineHeight;
- (void)setThumbImage:;
- (id)thumbImage;
- (void)setMinTrackColor:;
- (void)setMaxTrackColor:;
- (id)minTrackColor;
- (id)maxTrackColor;
- (void)setSliderHeight:;
- (void).cxx_destruct;
- (double)sliderHeight;
- (double)lineHeight;
- (void)setLineHeight:;
@end
