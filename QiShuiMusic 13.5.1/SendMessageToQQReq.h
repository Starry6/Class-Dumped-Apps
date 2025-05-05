@interface SendMessageToQQReq : QQBaseReq
@property (nonatomic) QQApiObject apiObject;
@property (nonatomic) ArkObject arkObject;
@property (nonatomic) QQApiMiniProgramObject miniProgramObject;
- (id)arkObject;
- (id)miniProgramObject;
- (void)setArkObject:;
- (void)setMiniProgramObject:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)apiObject;
- (void)setApiObject:;
+ (id)reqWithContent:;
+ (id)reqWithArkContent:;
+ (id)reqWithMiniContent:;
@end
