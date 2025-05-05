@interface MKTransitMessageCell : MKCustomSeparatorCell
@property (nonatomic) NSString messageText;
- (id)initWithReuseIdentifier:;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void).cxx_destruct;
- (id)messageText;
- (void)setMessageText:;
- (void)_updateConstraintValues;
@end
