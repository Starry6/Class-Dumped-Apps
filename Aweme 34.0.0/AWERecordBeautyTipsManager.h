@interface AWERecordBeautyTipsManager : NSObject
@property (nonatomic) AWEBeautyTipsHintView beautyHint;
@property (nonatomic) AWEBeautyTipsHintView zoomScaleHintView;
- (void)removeZoomScaleHintView;
- (id)zoomScaleHintView;
- (void)setZoomScaleHintView:;
- (void)showBeautyHintWithContainer:beautyName:categoryName:;
- (id)beautyHint;
- (void)setBeautyHint:;
- (void)removeBeautyHint;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
