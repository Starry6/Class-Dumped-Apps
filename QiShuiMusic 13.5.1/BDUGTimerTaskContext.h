@interface BDUGTimerTaskContext : NSObject
@property (nonatomic) <BDUGTimerTaskContextDelegate> delegate;
@property (nonatomic) double progress;
@property (nonatomic) Q status;
@property (nonatomic) BDUGLuckyTimerTaskInfoModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithModel:progress:status:delegate:;
- (void)retryUploadTaskProgress;
- (void)tryUploadTaskProgress;
- (void)updateClientExtraParams:;
- (void)updatePendantPosition:;
- (id)model;
- (void)setStatus:;
- (void)setModel:;
- (void)setDelegate:;
- (void)setProgress:;
- (double)progress;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)status;
@end
