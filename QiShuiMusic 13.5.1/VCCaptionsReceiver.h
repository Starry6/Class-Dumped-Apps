@interface VCCaptionsReceiver : NSObject
@property (nonatomic) <VCCaptionsReceiverDelegate> delegate;
@property (nonatomic) VCCaptionsTranscription currentTranscription;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:;
- (void)processCaptionsData:;
- (id)currentTranscription;
- (void)setCurrentTranscription:;
@end
