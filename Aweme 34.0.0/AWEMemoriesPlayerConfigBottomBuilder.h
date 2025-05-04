@interface AWEMemoriesPlayerConfigBottomBuilder : NSObject
@property (nonatomic) NSArray leftBtnArray;
@property (nonatomic) double leftBtnBarViewSpace;
@property (nonatomic) NSArray rightBtnArray;
@property (nonatomic) ACCAnimatedButton mainButton;
@property (nonatomic) @? viewWillAppearHandler;
- (void)setLeftBtnArray:;
- (void)setRightBtnArray:;
- (id)leftBtnArray;
- (id)rightBtnArray;
- (double)leftBtnBarViewSpace;
- (void)setLeftBtnBarViewSpace:;
- (void).cxx_destruct;
- (void)setViewWillAppearHandler:;
- (id)viewWillAppearHandler;
- (id)mainButton;
- (void)setMainButton:;
@end
