@interface BWInferenceSchedulerGraphInputNode : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) <BWInferenceExecutable> executable;
@property (nonatomic) <BWInferenceSubmittable> submittable;
@property (nonatomic) <BWInferenceExtractable> extractable;
@property (nonatomic) <BWInferencePropagatable> propagatable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)submittable;
- (id)extractable;
- (id)executable;
- (id)propagatable;
- (void)dealloc;
- (int)extractFromSampleBuffer:usingVideoRequirements:metadataRequirements:toStorage:;
- (int)extractFromStorage:usingVideoRequirements:metadataRequirements:toSampleBuffer:;
- (int)type;
- (id)initWithVideoPropagatedToStorage:;
- (id)newStorage;
- (id)description;
@end
