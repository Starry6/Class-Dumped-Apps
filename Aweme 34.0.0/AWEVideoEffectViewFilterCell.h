@interface AWEVideoEffectViewFilterCell : AWEVideoEffectViewCollectionCell
@property (nonatomic) UILongPressGestureRecognizer longPressGesture;
@property (nonatomic) @? longPressBlock;
- (id)longPressBlock;
- (void)setLongPressBlock:;
- (id)initWithFrame:;
- (void)longPress:;
- (void).cxx_destruct;
- (id)longPressGesture;
- (void)setSelected:;
- (void)setLongPressGesture:;
@end
