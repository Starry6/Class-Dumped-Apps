@interface BWStillImageInferences : NSObject
@property (nonatomic) ^{__CVBuffer=} skinMask;
@property (nonatomic) ^{__CVBuffer=} skyMask;
@property (nonatomic) ^{__CVBuffer=} personMask;
@property (nonatomic) ^{__CVBuffer=} lowResPersonMask;
@property (nonatomic) NSArray lowResPersonInstanceMasks;
@property (nonatomic) NSArray lowResPersonInstanceConfidences;
@property (nonatomic) NSArray lowResPersonInstanceBoundingBoxes;
@property (nonatomic) NSArray skinToneClassifications;
@property (nonatomic) NSArray faceObservations;
@property (nonatomic) NSDictionary inferenceAttachedMediaMetadata;
- (void)dealloc;
- (id)faceObservations;
- (id)description;
- (id)skinMask;
- (id)personMask;
- (id)lowResPersonInstanceMasks;
- (id)lowResPersonInstanceConfidences;
- (id)lowResPersonInstanceBoundingBoxes;
- (id)initWithSkinMask:skyMask:personMask:lowResPersonMask:lowResPersonInstanceMasks:lowResPersonInstanceConfidences:lowResPersonInstanceBoundingBoxes:skinToneClassifications:faceObservations:inferenceAttachedMediaMetadata:;
- (void)addInferenceBuffer:inferenceAttachedMediaKey:;
- (void)addInference:inferenceAttachmentKey:;
- (void)addInferenceAttachedMediaMetadata:;
- (id)skyMask;
- (id)lowResPersonMask;
- (id)skinToneClassifications;
- (id)inferenceAttachedMediaMetadata;
@end
