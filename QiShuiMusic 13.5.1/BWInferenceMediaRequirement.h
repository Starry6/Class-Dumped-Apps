@interface BWInferenceMediaRequirement : BWInferenceDataRequirement
@property (nonatomic) NSString attachedMediaKey;
@property (nonatomic) Q count;
- (id)initWithMediaRequirement:;
- (id)initWithAttachedMediaKey:count:;
- (void)dealloc;
- (id)attachedMediaKey;
- (id)initWithAttachedMediaKey:;
- (id)description;
- (unsigned long long)count;
- (id)copyWithZone:;
@end
