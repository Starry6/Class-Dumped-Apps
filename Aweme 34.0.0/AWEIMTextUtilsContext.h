@interface AWEIMTextUtilsContext : NSObject
@property (nonatomic) YYTextHighlight highlight;
@property (nonatomic) {_NSRange=QQ} textRange;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) UIView view;
@property (nonatomic) NSString btmToken;
@property (nonatomic) q urlUIType;
- (void)setBtmToken:;
- (void)setUrlUIType:;
- (long long)urlUIType;
- (id)btmToken;
- (id)message;
- (id)view;
- (id)textRange;
- (void)setView:;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)highlight;
- (void)setHighlight:;
- (void)setTextRange:;
@end
