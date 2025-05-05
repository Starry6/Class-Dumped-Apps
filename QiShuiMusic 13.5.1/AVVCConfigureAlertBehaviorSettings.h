@interface AVVCConfigureAlertBehaviorSettings : NSObject
@property (nonatomic) Q streamID;
@property (nonatomic) q startAlert;
@property (nonatomic) q stopAlert;
@property (nonatomic) q stopOnErrorAlert;
- (unsigned long long)streamID;
- (id)initWithStreamID:;
- (void)setStartAlert:;
- (void)setStreamID:;
- (long long)startAlert;
- (long long)stopAlert;
- (void)setStopAlert:;
- (long long)stopOnErrorAlert;
- (void)setStopOnErrorAlert:;
@end
