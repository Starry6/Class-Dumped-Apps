@interface MRSendVoiceInputMessage : MRProtocolMessage
@property (nonatomic) MRAudioBuffer buffer;
@property (nonatomic) {?=dd} time;
@property (nonatomic) float gain;
- (float)gain;
- (id)buffer;
- (id)time;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithBuffer:time:gain:;
- (void)_initializeDataIfNecessary;
@end
