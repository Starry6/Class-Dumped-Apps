@interface FLEXSystemLogCell : FLEXTableViewCell
@property (nonatomic) UILabel logMessageLabel;
@property (nonatomic) NSAttributedString logMessageAttributedText;
@property (nonatomic) FLEXSystemLogMessage logMessage;
@property (nonatomic) NSString highlightedText;
- (void)postInit;
- (void)setLogMessage:;
- (void)setHighlightedText:;
- (id)logMessageAttributedText;
- (void)layoutSubviews;
- (id)logMessage;
- (id)highlightedText;
- (id)logMessageLabel;
- (void)setLogMessageLabel:;
- (void)setLogMessageAttributedText:;
- (void).cxx_destruct;
+ (id)attributedTextForLogMessage:highlightedText:;
+ (id)displayedTextForLogMessage:;
+ (double)preferredHeightForLogMessage:inWidth:;
+ (id)logTimeStringFromDate:;
@end
