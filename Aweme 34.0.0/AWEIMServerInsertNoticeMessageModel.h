@interface AWEIMServerInsertNoticeMessageModel : NSObject
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) q preCheckMessageCount;
- (void)setPreCheckMessageCount:;
- (long long)preCheckMessageCount;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
@end
