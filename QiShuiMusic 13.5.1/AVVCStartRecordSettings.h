@interface AVVCStartRecordSettings : NSObject
@property (nonatomic) Q streamID;
@property (nonatomic) Q startHostTime;
@property (nonatomic) q startAlert;
@property (nonatomic) q stopAlert;
@property (nonatomic) q stopOnErrorAlert;
@property (nonatomic) BOOL skipAlert;
@property (nonatomic) I startAnchorPoint;
- (unsigned long long)streamID;
- (id)initWithStreamID:atStartHostTime:;
- (void)setStartAlert:;
- (void)setStreamID:;
- (long long)startAlert;
- (long long)stopAlert;
- (void)setStopAlert:;
- (long long)stopOnErrorAlert;
- (void)setStopOnErrorAlert:;
- (unsigned long long)startHostTime;
- (void)setStartHostTime:;
- (BOOL)skipAlert;
- (void)setSkipAlert:;
- (unsigned int)startAnchorPoint;
- (void)setStartAnchorPoint:;
@end
