@interface AWEPOISimpleCollectView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) AWEPOICollectView collectView;
- (void)setCollected:animated:;
- (id)collectView;
- (void)setCollectView:;
- (id)accessibilityLabel;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)bgView;
- (void)setBgView:;
@end
