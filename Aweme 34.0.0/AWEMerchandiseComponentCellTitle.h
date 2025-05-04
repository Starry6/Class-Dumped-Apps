@interface AWEMerchandiseComponentCellTitle : AWEMerchandiseComponentBaseCell
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) @? closeButtonClickedBlock;
@property (nonatomic) double closeButtonShowProgress;
- (double)closeButtonShowProgress;
- (void)configWithComponentModel:filterManager:;
- (id)closeButtonClickedBlock;
- (void)setCloseButtonShowProgress:;
- (void)setCloseButtonClickedBlock:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)showCloseButton;
- (void)setShowCloseButton:;
+ (id)textFontWithModel:filterManager:;
+ (double)titleWidthWithModel:filterManager:;
+ (id)identifier;
@end
