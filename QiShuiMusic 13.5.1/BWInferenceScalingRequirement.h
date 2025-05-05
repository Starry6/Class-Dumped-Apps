@interface BWInferenceScalingRequirement : NSObject
@property (nonatomic) NSArray orderedVideoRequirements;
- (void)dealloc;
- (id)initWithInputVideoRequirement:requestedOutputVideoRequirements:intermediatePixelBufferCompressionType:;
- (id)orderedVideoRequirements;
@end
