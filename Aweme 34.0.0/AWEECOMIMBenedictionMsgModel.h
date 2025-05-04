@interface AWEECOMIMBenedictionMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) NSString url;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) NSString latestMsgId;
@property (nonatomic) NSString latestMsgConversationId;
@property (nonatomic) NSNumber msgCreateTime;
@property (nonatomic) NSString localMsgId;
- (id)trackCellDisplayUniqueKey;
- (id)msgCreateTime;
- (id)latestMsgConversationId;
- (id)localMsgId;
- (id)latestMsgId;
- (void)setLatestMsgId:;
- (void)setLatestMsgConversationId:;
- (void)setMsgCreateTime:;
- (void)setLocalMsgId:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
- (double)imageWidth;
- (double)imageHeight;
- (void)setImageHeight:;
- (void)setImageWidth:;
+ (Class)cellClass;
@end
