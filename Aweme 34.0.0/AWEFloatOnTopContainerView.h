@interface AWEFloatOnTopContainerView : AWEFloatOnTopBasicContainer
@property (nonatomic) AWEButton closeTapArea;
@property (nonatomic) UIImageView closeImageView;
@property (nonatomic) <AWEFloatOnTopContainerViewDelegate> delegate;
- (id)closeTapArea;
- (void)setCloseTapArea:;
- (void)close;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)tap;
- (id)closeImageView;
- (void)setCloseImageView:;
+ (id)showOnView:withFrame:;
@end
