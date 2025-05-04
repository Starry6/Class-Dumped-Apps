@interface AWEIMMessageSendProgressStage : NSObject
@property (nonatomic) double weight;
@property (nonatomic) double progress;
@property (nonatomic) <AWEIMMessageSendProgressStageDelegate> delegate;
- (id)initWithWeight:;
- (double)weightProcess;
- (void)setWeight:;
- (double)weight;
- (id)delegate;
- (double)progress;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setProgress:;
@end
