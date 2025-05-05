@interface BWInferenceCompressibleLazyVideoRequirement : BWInferenceLazyVideoRequirement
- (id)initWithAttachedMediaKey:preparedByAttachedMediaKey:count:videoFormatProvider:;
- (void)dealloc;
- (id)initWithLazyVideoRequirement:;
- (int)prepareForInputInferenceVideoFormat:;
@end
