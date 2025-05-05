@interface WXSubscribeMiniProgramMsgResp : BaseResp
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSString nickName;
- (id)unionId;
- (id)openId;
- (void)setOpenId:;
- (void)setUnionId:;
- (id)nickName;
- (void).cxx_destruct;
- (void)setNickName:;
@end
