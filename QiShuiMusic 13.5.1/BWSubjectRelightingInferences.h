@interface BWSubjectRelightingInferences : NSObject
@property (nonatomic) ^{__CVBuffer=} skinMask;
@property (nonatomic) ^{__CVBuffer=} personMask;
@property (nonatomic) NSArray lowResPersonInstanceMasks;
@property (nonatomic) NSArray lowResPersonInstanceConfidences;
@property (nonatomic) NSArray lowResPersonInstanceBoundingBoxes;
@property (nonatomic) NSArray skinToneClassificationsForFaces;
- (void)dealloc;
- (id)skinMask;
- (void)setSkinMask:;
- (id)personMask;
- (void)setPersonMask:;
- (id)lowResPersonInstanceMasks;
- (void)setLowResPersonInstanceMasks:;
- (id)lowResPersonInstanceConfidences;
- (void)setLowResPersonInstanceConfidences:;
- (id)lowResPersonInstanceBoundingBoxes;
- (void)setLowResPersonInstanceBoundingBoxes:;
- (id)skinToneClassificationsForFaces;
- (void)setSkinToneClassificationsForFaces:;
@end
