@interface AWEIMSendMessageCallBackTarget : NSObject
@property (nonatomic) NSString messageID;
@property (nonatomic) @? action;
@property (nonatomic) @? onBindAction;
@property (nonatomic) BOOL callActionDoNotWaitServerResponse;
@property (nonatomic) BOOL sendMessageType;
- (void)setSendMessageType:;
- (void)setCallActionDoNotWaitServerResponse:;
- (void)setOnBindAction:;
- (BOOL)sendMessageType;
- (id)onBindAction;
- (BOOL)callActionDoNotWaitServerResponse;
- (id)messageID;
- (void)setAction:;
- (void)setMessageID:;
- (id)action;
- (void).cxx_destruct;
@end
