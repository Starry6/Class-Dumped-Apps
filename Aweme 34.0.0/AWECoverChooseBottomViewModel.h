@interface AWECoverChooseBottomViewModel : NSObject
@property (nonatomic) AWECoverTextEffectCellModel currentEffectModel;
@property (nonatomic) AWECoverTextEffectCellModel selectedEffectModel;
@property (nonatomic) NSString currentTitle;
@property (nonatomic) NSString selectedTitle;
- (id)currentEffectModel;
- (void)setCurrentEffectModel:;
- (void)selectTitle:;
- (void)updateEffectModel:;
- (BOOL)shouldHideResetButton;
- (void)selectEffectModel:;
- (void)setSelectedEffectModel:;
- (id)selectedEffectModel;
- (void).cxx_destruct;
- (id)currentTitle;
- (void)setCurrentTitle:;
- (id)selectedTitle;
- (void)updateTitle:;
- (void)setSelectedTitle:;
@end
