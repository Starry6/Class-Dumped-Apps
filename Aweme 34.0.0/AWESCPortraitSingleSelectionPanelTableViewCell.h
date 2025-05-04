@interface AWESCPortraitSingleSelectionPanelTableViewCell : DUXSingleSelectionPanelTableViewCell
@property (nonatomic) UILabel label;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) q accessoryStyle;
@property (nonatomic) @ accessoryInfo;
@property (nonatomic) DUXTextTag mTag;
@property (nonatomic) DUXDivider mSeparator;
@property (nonatomic) BDSCImageView mArrowImageView;
@property (nonatomic) UILabel mAccessoryTextLabel;
- (void)setTagString:;
- (id)mArrowImageView;
- (id)mAccessoryTextLabel;
- (void)setMTag:;
- (void)setMSeparator:;
- (void)setMArrowImageView:;
- (void)setMAccessoryTextLabel:;
- (void)setLabel:;
- (id)label;
- (BOOL)showSeparator;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setShowSeparator:;
- (long long)accessoryStyle;
- (void)setAccessoryStyle:;
- (id)accessoryInfo;
- (void)setAccessoryInfo:;
- (id)mSeparator;
- (id)mTag;
@end
