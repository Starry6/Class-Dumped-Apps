@interface AWELiveFeedBackDataManager : NSObject
@property (nonatomic) NSDate lastUploadAlogDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appKey;
- (void)registerByteSync;
- (void)uploadImage:completion:;
- (void)logAppState;
- (void)uploadALogsWithCompletion:;
- (id)aAWEFeedbackCommonAdapter;
- (id)adAppKey;
- (void)p_logAppState;
- (int)userFeedbackByteSyncBusinessID;
- (void)__onByteSyncMessage:;
- (id)lastUploadAlogDate;
- (void)setLastUploadAlogDate:;
- (void)__uploadAlogTicket:;
- (void)__cloneExprTicket:;
- (void)__onFinishUpload:ticketInfo:;
- (void)__postTicketInfo:onComplete:;
- (void)checkIfNewMessageWithHeaders:completion:;
- (void).cxx_destruct;
+ (Class)aAWEFeedbackCommonAdapterClass;
+ (id)sharedInstance;
@end
