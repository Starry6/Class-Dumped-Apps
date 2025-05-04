@interface AWEHotSearchChangeModeBottomView : UIView
@property (nonatomic) UIImageView closeImageView;
@property (nonatomic) UIView separateLine;
@property (nonatomic) UIView bottomBGView;
@property (nonatomic) UIView upperBGView;
@property (nonatomic) <AWEHotSearchChangeModeDelegate> delegate;
- (id)separateLine;
- (void)setSeparateLine:;
- (void)updateBackgroundColor:upColor:;
- (void)updateType:;
- (id)bottomBGView;
- (id)upperBGView;
- (void)closeFullMode:;
- (id)colorStringAdjust:;
- (void)setBottomBGView:;
- (void)setUpperBGView:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)closeImageView;
- (void)setCloseImageView:;
+ (long long)barTypeForAweme:;
@end
