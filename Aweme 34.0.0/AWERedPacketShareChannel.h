@interface AWERedPacketShareChannel : AWEShareBaseChannel
@property (nonatomic) AWEIMVideoRedpacketManager redPacketManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWithCompletion:;
- (id)shareImage;
- (void)shareItem:willAppear:;
- (void)p_showDialog;
- (void)p_showSendRedPacketVCWithCompletion:;
- (id)redPacketManager;
- (void)setRedPacketManager:;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
