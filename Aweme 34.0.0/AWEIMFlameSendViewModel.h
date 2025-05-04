@interface AWEIMFlameSendViewModel : NSObject
@property (nonatomic) AWEInteractModularizationHotsoonFlameModel flameModel;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
- (id)secUserID;
- (void)setSecUserID:;
- (BOOL)hasReply;
- (void)trackButtonShowWithHasReply:;
- (id)initWithFlameModel:userID:secUserID:;
- (id)sendText;
- (id)orderText;
- (unsigned long long)orderButtonStatus;
- (BOOL)isOfficialAccount;
- (BOOL)hasOrderButton;
- (void)updateHasReply:;
- (void)clickFlameReplyWithCompletion:;
- (void)clickFlameSendWithCompletion:;
- (void)clickFlameOrderWithCompletion:;
- (void)trackWithButtonEvent:actionType:;
- (id)flameModel;
- (id)aAWENoticeModuleServiceDOUYINHTSAdaper;
- (void)setFlameModel:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)replyText;
+ (Class)aAWENoticeModuleServiceDOUYINHTSAdaperClass;
@end
