@interface SAMICore_AecInput : NSObject
@property (nonatomic) SAMICore_AudioBuffer ref;
@property (nonatomic) SAMICore_AudioBuffer mic;
- (id)mic;
- (void)setMic:;
- (id)initWithNumberSamples:numberChannels:;
- (void)dealloc;
- (void)destroy;
- (id)ref;
- (void)setRef:;
@end
