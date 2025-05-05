@interface BWFastStereoDisparityConfiguration : BWInferenceConfiguration
@property (nonatomic) NSInteger fsdNetStereoImagesAlignment;
@property (nonatomic) I disparityType;
@property (nonatomic) q disparityPrioritization;
- (int)fsdNetStereoImagesAlignment;
- (id)initWithInferenceType:fsdNetStereoImagesAlignment:disparityType:;
- (unsigned int)disparityType;
- (long long)disparityPrioritization;
@end
