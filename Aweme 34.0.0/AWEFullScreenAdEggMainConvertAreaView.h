@interface AWEFullScreenAdEggMainConvertAreaView : UIView
@property (nonatomic) AWEAdTagView adTagView;
@property (nonatomic) AWEFullScreenAdEggModel model;
- (id)adTagView;
- (void)setAdTagView:;
- (void)setModel:;
- (id)init;
- (void)setup;
- (id)model;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)updateWithModel:;
@end
