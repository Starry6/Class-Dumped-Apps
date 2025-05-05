@interface AVAudioChannelGroupSemantics : NSObject
@property (nonatomic) I channelCount;
@property (nonatomic) I semantics;
@property (nonatomic) I terminalType;
@property (nonatomic) AVAudioChannelLayout layout;
- (id)init;
- (void)setChannelCount:;
- (void)setLayout:;
- (id)initWithCoder:;
- (unsigned int)channelCount;
- (void)encodeWithCoder:;
- (id)layout;
- (void).cxx_destruct;
- (id)initWithChannelCount:semantics:terminalType:layout:;
- (id)initWithAudioChannelGroupSemantics:;
- (id)createAudioChannelGroupSemantics;
- (unsigned int)semantics;
- (void)setSemantics:;
- (unsigned int)terminalType;
- (void)setTerminalType:;
+ (BOOL)supportsSecureCoding;
@end
