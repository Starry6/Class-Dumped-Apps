@interface ATIOBinding : NSObject
@property (nonatomic) AVAudioSession session;
@property (nonatomic) I sessionID;
@property (nonatomic) NSString deviceUID;
@property (nonatomic) I deviceID;
- (unsigned int)sessionID;
- (id)deviceUID;
- (id)initWithDeviceID:;
- (id)initWithCoder:;
- (unsigned int)deviceID;
- (void)encodeWithCoder:;
- (id)session;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)initWithImpl:;
- (id)initWithAudioSession:;
- (id)initWithAudioSessionID:;
- (id)initWithDeviceUID:;
+ (BOOL)supportsSecureCoding;
@end
