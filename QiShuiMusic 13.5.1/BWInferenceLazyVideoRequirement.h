@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement
@property (nonatomic) NSString preparedByAttachedMediaKey;
- (id)initWithAttachedMediaKey:preparedByAttachedMediaKey:count:videoFormatProvider:;
- (id)initWithAttachedMediaKey:count:;
- (void)dealloc;
- (id)initWithAttachedMediaKey:videoFormat:count:;
- (id)preparedByAttachedMediaKey;
- (id)initWithLazyVideoRequirement:;
- (id)description;
- (int)prepareForInputInferenceVideoFormat:;
- (id)initWithAttachedMediaKey:preparedByAttachedMediaKey:videoFormatProvider:;
- (id)copyWithZone:;
@end
