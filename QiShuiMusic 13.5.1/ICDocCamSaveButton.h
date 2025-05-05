@interface ICDocCamSaveButton : UIButton
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UILabel saveLabel;
@property (nonatomic) NSMutableArray layoutConstraints;
@property (nonatomic) q documentCount;
@property (nonatomic) q maxWidthForPortraitIPhone;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (id)accessibilityUserInputLabels;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)layoutConstraints;
- (void)setLayoutConstraints:;
- (id)countLabel;
- (void)setCountLabel:;
- (long long)documentCount;
- (void)setDocumentCount:;
- (id)saveButtonTitleForDocumentCount:;
- (id)saveButtonCountStringForDocumentCount:;
- (long long)maxWidthForPortraitIPhone;
- (void)setMaxWidthForPortraitIPhone:;
- (id)saveLabel;
- (void)setSaveLabel:;
@end
