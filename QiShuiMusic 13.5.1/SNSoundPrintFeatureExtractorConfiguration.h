@interface SNSoundPrintFeatureExtractorConfiguration : NSObject
@property (nonatomic) double sampleRate;
@property (nonatomic) I windowLengthFrames;
@property (nonatomic) I stepSizeFrames;
@property (nonatomic) I outputFeatureSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)sampleRate;
- (void).cxx_destruct;
- (id)createProcessorWithError:;
- (unsigned int)windowLengthFrames;
- (unsigned int)stepSizeFrames;
- (unsigned int)outputFeatureSize;
@end
