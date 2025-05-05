@interface WXSubscribeMsgReq : BaseReq
@property (nonatomic) I scene;
@property (nonatomic) NSString templateId;
@property (nonatomic) NSString reserved;
- (id)reserved;
- (void)setScene:;
- (void)setReserved:;
- (unsigned int)scene;
- (void).cxx_destruct;
- (id)templateId;
- (void)setTemplateId:;
@end
