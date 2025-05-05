@interface BWTextLocalizationInferenceConfiguration : BWBoundingBoxInferenceConfiguration
@property (nonatomic) {?=SSS} version;
- (void)setVersion:;
- (id)version;
- (id)initWithInferenceType:version:;
+ (id)configuration;
@end
