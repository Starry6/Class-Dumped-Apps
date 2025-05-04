@interface AWEECMallSyncMessage : MTLModel
@property (nonatomic) BOOL isLaunchedMessage;
@property (nonatomic) q msgType;
@property (nonatomic) q msgSubType;
@property (nonatomic) NSString msgUniqId;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setMsgSubType:;
- (void)setMsgUniqId:;
- (id)msgUniqId;
- (long long)msgSubType;
- (BOOL)isShowingMessage;
- (void)setIsLaunchedMessage:;
- (BOOL)isHiddenMessage;
- (BOOL)isLaunchedMessage;
- (id)extra;
- (void).cxx_destruct;
- (long long)msgType;
- (void)setMsgType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
