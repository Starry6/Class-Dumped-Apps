@interface MFMailComposeToField : MFMailComposeRecipientTextView
@property (nonatomic) MFComposeSMIMELockButton SMIMEButton;
@property (nonatomic) <MFMailComposeToFieldDelegate> toFieldDelegate;
@property (nonatomic) BOOL smimeButtonVisible;
@property (nonatomic) BOOL smimeButtonEnabled;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setExpanded:;
- (void).cxx_destruct;
- (id)toFieldDelegate;
- (void)setToFieldDelegate:;
- (id)_textContainerExclusionPathsWithAddButton:;
- (void)setWantsEncryption:canEncrypt:animated:;
- (void)_tappedSMIMEButton:;
- (id)SMIMEButton;
- (void)setSmimeButtonEnabled:;
- (void)_setSMIMEButtonVisible:animated:;
- (BOOL)smimeButtonVisible;
- (void)setSmimeButtonVisible:;
- (BOOL)smimeButtonEnabled;
@end
