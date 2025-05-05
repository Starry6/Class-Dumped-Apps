@interface SAMICore_AudioBuffer : NSObject
@property (nonatomic) I numberChannels;
@property (nonatomic) I numberSamples;
@property (nonatomic) NSInteger isInterleave;
@property (nonatomic) ^v data;
- (id)initWithNumberSamples:numberChannels:isInterleave:;
- (int)isInterleave;
- (unsigned int)numberChannels;
- (void)setIsInterleave:;
- (void)setNumberChannels:;
- (void)setNumberSamples:;
- (void)dealloc;
- (id)data;
- (void)destroy;
- (void)setData:;
- (unsigned int)numberSamples;
@end
