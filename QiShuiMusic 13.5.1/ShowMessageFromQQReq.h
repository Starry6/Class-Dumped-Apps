@interface ShowMessageFromQQReq : QQBaseReq
@property (nonatomic) QQApiObject message;
- (void)dealloc;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
+ (id)reqWithContent:;
@end
