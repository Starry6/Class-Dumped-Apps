@interface IESLiveInteractPublicStreamInfo : NSObject
@property (nonatomic) NSInteger state;
@property (nonatomic) double timeStamp;
@property (nonatomic) IESLiveMCUContent mcuContent;
@property (nonatomic) NSString publicStreamId;
@property (nonatomic) Q publicStreamType;
- (void)recordRetryPull;
- (BOOL)shouldRetryPull;
- (id)initWithMcuContent:;
- (id)mcuContent;
- (id)publicStreamId;
- (unsigned long long)publicStreamType;
- (id)rivalsStreamId;
- (void)setState:;
- (int)state;
- (void).cxx_destruct;
- (double)timeStamp;
@end
