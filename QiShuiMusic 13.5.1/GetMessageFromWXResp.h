@interface GetMessageFromWXResp : BaseResp
@property (nonatomic) NSString text;
@property (nonatomic) WXMediaMessage message;
@property (nonatomic) BOOL bText;
- (BOOL)bText;
- (void)setBText:;
- (void)setMessage:;
- (void)setText:;
- (id)message;
- (void).cxx_destruct;
- (id)text;
@end
