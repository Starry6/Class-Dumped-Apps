@interface AWEIMMessageDegradationInfo : NSObject
@property (nonatomic) NSString sendContent;
@property (nonatomic) NSString recvContent;
@property (nonatomic) NSString displayContent;
- (void)setDisplayContent:;
- (id)sendContent;
- (id)recvContent;
- (void)setSendContent:;
- (void)setRecvContent:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)displayContent;
@end
