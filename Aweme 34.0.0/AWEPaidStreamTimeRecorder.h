@interface AWEPaidStreamTimeRecorder : NSObject
@property (nonatomic) double loadStartTime;
@property (nonatomic) double showStartTime;
@property (nonatomic) double loadResultTime;
@property (nonatomic) double openContainerTime;
@property (nonatomic) double getSendAwardAlreadyTime;
- (double)showStartTime;
- (void)setShowStartTime:;
- (double)loadStartTime;
- (void)setLoadStartTime:;
- (void)setGetSendAwardAlreadyTime:;
- (void)setOpenContainerTime:;
- (void)setLoadResultTime:;
- (double)getSendAwardAlreadyTime;
- (double)openContainerTime;
- (double)loadResultTime;
@end
