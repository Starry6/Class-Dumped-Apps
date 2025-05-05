@interface SAMICore_VoiceAssistantAudioData : NSObject
@property (nonatomic) NSString taskId;
@property (nonatomic) NSData data;
@property (nonatomic) Q dataSize;
@property (nonatomic) NSData refData;
@property (nonatomic) Q refDataSize;
- (id)refData;
- (void)setRefDataSize:;
- (unsigned long long)refDataSize;
- (void)setRefData:;
- (void)dealloc;
- (unsigned long long)dataSize;
- (id)data;
- (id)taskId;
- (void)setDataSize:;
- (void)setData:;
- (void)setTaskId:;
@end
