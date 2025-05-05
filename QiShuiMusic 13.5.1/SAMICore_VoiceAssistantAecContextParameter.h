@interface SAMICore_VoiceAssistantAecContextParameter : NSObject
@property (nonatomic) BOOL enableAec;
@property (nonatomic) NSString modelPath;
@property (nonatomic) Q refSampleRate;
@property (nonatomic) Q refNumberChannel;
- (BOOL)enableAec;
- (unsigned long long)refNumberChannel;
- (unsigned long long)refSampleRate;
- (void)setEnableAec:;
- (void)setRefNumberChannel:;
- (void)setRefSampleRate:;
- (void)setModelPath:;
- (void)dealloc;
- (id)modelPath;
@end
