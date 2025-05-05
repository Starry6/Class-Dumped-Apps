@interface SFTabGroupTitleView : UIButton
@property (nonatomic) WBTabGroup tabGroup;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)tabGroup;
- (void)setTabGroup:;
- (void)updateTitle;
- (id)_attributedStringWithImageNamed:textStyle:additionalSymbolicTraits:color:baselineOffset:;
@end
