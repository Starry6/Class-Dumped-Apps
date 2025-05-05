@interface AVAudioDeviceTestProcessingChain : NSObject
@property (nonatomic) NSURL graphURL;
@property (nonatomic) NSURL processingStripURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)graphURL;
- (void)setGraphURL:;
- (id)processingStripURL;
- (void)setProcessingStripURL:;
+ (BOOL)supportsSecureCoding;
@end
