@interface VCAudioCaptionsBufferInfo : NSObject
@property (nonatomic) q token;
@property (nonatomic) C priority;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} format;
@property (nonatomic) I countOfLowPrioritySamples;
- (void)dealloc;
- (id)format;
- (long long)token;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (unsigned char)priority;
- (id)initWithStreamToken:format:bufferLength:;
- (unsigned int)countOfLowPrioritySamples;
@end
