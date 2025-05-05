@interface MRVirtualVoiceInputDevice : NSObject
@property (nonatomic) I deviceID;
@property (nonatomic) MRVirtualVoiceInputDeviceDescriptor descriptor;
@property (nonatomic) I recordingState;
@property (nonatomic) NSData data;
- (id)descriptor;
- (void)setDescriptor:;
- (id)initWithDeviceID:;
- (id)data;
- (unsigned int)deviceID;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)recordingState;
- (void)setRecordingState:;
@end
