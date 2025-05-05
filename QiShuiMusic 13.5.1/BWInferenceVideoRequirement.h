@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement
@property (nonatomic) BWInferenceVideoFormat videoFormat;
@property (nonatomic) NSInteger videoStorageType;
- (id)videoFormat;
- (id)initWithAttachedMediaKey:count:;
- (void)dealloc;
- (id)initWithAttachedMediaKey:videoFormat:count:;
- (BOOL)isSatisfiedByRequirement:;
- (id)initWithAttachedMediaKey:videoFormat:;
- (unsigned long long)satisfactionHash;
- (id)initWithVideoRequirement:;
- (id)initWithAttachedMediaKey:videoFormat:videoStorageType:;
- (int)videoStorageType;
- (id)description;
- (id)copyWithZone:;
@end
