@interface IESLiveCommentWidgetInputAtUser : NSObject
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) {_NSRange=QQ} rangeInPlainText;
@property (nonatomic) {_NSRange=QQ} rangeInAttributedText;
- (id)initWithUser:range:;
- (id)rangeInAttributedText;
- (id)rangeInPlainText;
- (void)setRangeInAttributedText:;
- (void)setRangeInPlainText:;
- (void)setUser:;
- (id)user;
- (void).cxx_destruct;
@end
