@interface VCMediaStreamSynchronizer : NSObject
@property (nonatomic) I sourceSampleRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithSourceSampleRate:destinationSampleRate:;
- (unsigned int)sourceSampleRate;
@end
