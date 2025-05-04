@interface AWEMVCardActionButton : UIButton
@property (nonatomic) double iconSizeLength;
@property (nonatomic) double textLength;
@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL needWholeAnimation;
@property (nonatomic) @? touchUpInsideBlock;
- (void)setTouchUpInsideBlock:;
- (double)iconSizeLength;
- (void)setIconSizeLength:;
- (void)updateAccessibilityWithModel:;
- (BOOL)needImageAnimation;
- (void)setNeedImageAnimation:;
- (BOOL)needWholeAnimation;
- (void)setNeedWholeAnimation:;
- (void)onTouchUpInsideLocation:;
- (void)configActionModel:iconSize:textLength:selected:;
- (id)init;
- (double)textLength;
- (void)touchesCancelled:withEvent:;
- (id)imageRectForContentRect:;
- (id)titleRectForContentRect:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setTextLength:;
- (id)touchUpInsideBlock;
@end
