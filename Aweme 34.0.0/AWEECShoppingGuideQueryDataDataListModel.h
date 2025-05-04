@interface AWEECShoppingGuideQueryDataDataListModel : IESLiveBridgeModel
@property (nonatomic) NSString messageId;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSNumber sceneType;
@property (nonatomic) NSString data;
@property (nonatomic) NSString createTime;
- (void)setSessionId:;
- (id)sessionId;
- (id)createTime;
- (id)messageId;
- (void)setCreateTime:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setMessageId:;
- (id)sceneType;
- (void)setSceneType:;
+ (id)modelCustomPropertyMapper;
@end
