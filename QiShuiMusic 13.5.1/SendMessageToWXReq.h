@interface SendMessageToWXReq : BaseReq
@property (nonatomic) NSString text;
@property (nonatomic) WXMediaMessage message;
@property (nonatomic) BOOL bText;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSString toUserOpenId;
@property (nonatomic) WXSceneDataObject sceneDataObject;
- (id)sceneDataObject;
- (BOOL)bText;
- (void)setBText:;
- (void)setSceneDataObject:;
- (void)setToUserOpenId:;
- (id)toUserOpenId;
- (void)setScene:;
- (void)setMessage:;
- (void)setText:;
- (int)scene;
- (id)message;
- (void).cxx_destruct;
- (id)text;
@end
