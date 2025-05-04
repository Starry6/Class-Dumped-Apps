@interface AWEIMPanelTitleViewModel : AWEIMPanelViewModel
@property (nonatomic) q numberOfLines;
@property (nonatomic) NSAttributedString attributedText;
- (long long)numberOfLines;
- (id)attributedText;
- (double)contentHeight;
- (void)setNumberOfLines:;
- (void)setAttributedText:;
- (void).cxx_destruct;
+ (id)titleViewModelWithTitle:fontSize:lineHeight:;
+ (double)contentHeightWithAttributedText:contentInsets:;
+ (id)titleViewModelWithTitle:;
+ (id)titleViewModelWithSubtitle:;
@end
