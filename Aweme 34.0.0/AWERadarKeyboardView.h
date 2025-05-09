@interface AWERadarKeyboardView : UIView
@property (nonatomic) NSArray keyValues;
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) AFDButton deleteBtn;
@property (nonatomic) double viewWidth;
@property (nonatomic) double itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double fontSize;
@property (nonatomic) @? inputComletion;
@property (nonatomic) AWERadarKeyboardViewModel model;
- (void)p_setupUI;
- (void)setViewWidth:;
- (id)suggestSize;
- (void)setDeleteBtnDisabled;
- (void)setDeleteBtnNormal;
- (void)setInputComletion:;
- (id)inputComletion;
- (void)p_setupSize;
- (id)deleteBtn;
- (id)p_initButtonWithValue:cornerRadius:;
- (void)p_clickButton:;
- (void)setDeleteBtn:;
- (void)setModel:;
- (id)init;
- (double)fontSize;
- (double)itemSpacing;
- (void)setButtons:;
- (void)setKeyValues:;
- (id)buttons;
- (void)setFontSize:;
- (void)setItemSpacing:;
- (id)model;
- (void).cxx_destruct;
- (id)keyValues;
- (id)screenSize;
- (double)itemSize;
- (void)setItemSize:;
- (double)viewWidth;
@end
