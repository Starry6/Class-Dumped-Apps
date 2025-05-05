@interface TLKSectionHeaderView : TLKView
@property (nonatomic) TLKLabel headerTextLabel;
@property (nonatomic) TLKProminenceView backgroundView;
@property (nonatomic) TLKMultilineText headerText;
- (id)headerText;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setHeaderText:;
- (id)headerLabelText;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (BOOL)usesDefaultLayoutMargins;
- (id)headerTextLabel;
- (void)setHeaderTextLabel:;
@end
