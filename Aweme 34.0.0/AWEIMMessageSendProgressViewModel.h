@interface AWEIMMessageSendProgressViewModel : NSObject
@property (nonatomic) AWEIMMessageSendProgressStage iCloudStage;
@property (nonatomic) AWEIMMessageSendProgressStage uploadStage;
@property (nonatomic) NSString messageID;
@property (nonatomic) double progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uploadStage;
- (void)setUploadStage:;
- (id)iCloudStage;
- (id)initWithiCloudStageWeight:uploadStageWeight:;
- (void)stage:didUpdateProccess:;
- (void)p_updateProcess;
- (void)setICloudStage:;
- (id)messageID;
- (double)progress;
- (void)setMessageID:;
- (void).cxx_destruct;
- (void)setProgress:;
@end
