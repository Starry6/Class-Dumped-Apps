@interface WXSubscribeMsgResp : BaseResp
@property (nonatomic) NSString templateId;
@property (nonatomic) I scene;
@property (nonatomic) NSString action;
@property (nonatomic) NSString reserved;
@property (nonatomic) NSString openId;
- (id)openId;
- (void)setOpenId:;
- (id)reserved;
- (void)setScene:;
- (id)action;
- (void)setReserved:;
- (unsigned int)scene;
- (void)setAction:;
- (void).cxx_destruct;
- (id)templateId;
- (void)setTemplateId:;
@end
