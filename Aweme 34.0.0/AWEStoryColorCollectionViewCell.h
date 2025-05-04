@interface AWEStoryColorCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView backColorView;
@property (nonatomic) UIView colorView;
@property (nonatomic) @? didClickColorView;
@property (nonatomic) AWEStoryColor color;
@property (nonatomic) NSDictionary colorNameDict;
- (id)backColorView;
- (void)setBackColorView:;
- (id)colorNameDict;
- (id)didClickColorView;
- (void)setDidClickColorView:;
- (void)setColorNameDict:;
- (id)accessibilityLabel;
- (id)color;
- (id)initWithFrame:;
- (void)setColor:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:;
- (BOOL)isAccessibilityElement;
- (id)colorView;
- (void)setColorView:;
@end
