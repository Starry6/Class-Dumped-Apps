@interface AVAudioBuffer : NSObject
@property (nonatomic) AVAudioFormat format;
@property (nonatomic) r^{AudioBufferList=I[1{AudioBuffer=II^v}]} audioBufferList;
@property (nonatomic) ^{AudioBufferList=I[1{AudioBuffer=II^v}]} mutableAudioBufferList;
- (void)dealloc;
- (id)format;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setByteLength:;
- (unsigned int)byteLength;
- (id)audioBufferList;
- (id)mutableAudioBufferList;
- (id)initWithFormat:byteCapacity:;
- (id)initWithPCMFormat:byteCapacity:bufferListNoCopy:deallocator:;
- (unsigned int)byteCapacity;
@end
