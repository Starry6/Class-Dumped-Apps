@interface AWEIMWatchOnceImageVideoContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) UIImage watchEndIconImage;
@property (nonatomic) UIImage beforeWatchIconImage;
@property (nonatomic) NSAttributedString watchEndLabelTitle;
@property (nonatomic) NSAttributedString beforeWatchLabelTitle;
@property (nonatomic) UIColor watchEndLabelTextColor;
@property (nonatomic) UIColor beforeWatchLabelTextColor;
@property (nonatomic) BOOL isWatchEnd;
- (BOOL)isWatchEnd;
- (void)setIsWatchEnd:;
- (void)setWatchEndLabelTitle:;
- (void)setWatchEndIconImage:;
- (void)setBeforeWatchLabelTitle:;
- (void)setBeforeWatchIconImage:;
- (id)watchEndIconImage;
- (id)beforeWatchIconImage;
- (id)watchEndLabelTitle;
- (id)beforeWatchLabelTitle;
- (id)watchEndLabelTextColor;
- (void)setWatchEndLabelTextColor:;
- (id)beforeWatchLabelTextColor;
- (void)setBeforeWatchLabelTextColor:;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
