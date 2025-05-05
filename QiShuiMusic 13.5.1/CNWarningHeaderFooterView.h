@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView
@property (nonatomic) BOOL shouldDisplayWarningIcon;
@property (nonatomic) NSString warningText;
- (void).cxx_destruct;
- (id)warningAttributedText;
- (void)setWarningText:;
- (BOOL)shouldDisplayWarningIcon;
- (void)setShouldDisplayWarningIcon:;
- (id)warningText;
+ (id)exclamationMark;
@end
