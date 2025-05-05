@interface IMDPLogsCollector : NSObject
@property (nonatomic) _DPBitValueRecorder privatizedUIInteractionRecorder;
@property (nonatomic) _DPBitValueRecorder privatizedImageReceivedRecorder;
@property (nonatomic) _DPBitValueRecorder privatizedImageSentRecorder;
- (id)init;
- (void).cxx_destruct;
- (BOOL)logPrivatizedImageSentEvent:;
- (BOOL)logPrivatizedUIInteractionEvent:;
- (BOOL)logPrivatizedImageReceivedEvent:;
- (id)privatizedUIInteractionRecorder;
- (void)setPrivatizedUIInteractionRecorder:;
- (id)privatizedImageReceivedRecorder;
- (void)setPrivatizedImageReceivedRecorder:;
- (id)privatizedImageSentRecorder;
- (void)setPrivatizedImageSentRecorder:;
+ (id)sharedInstance;
+ (id)_primaryAccountCountryCode;
@end
