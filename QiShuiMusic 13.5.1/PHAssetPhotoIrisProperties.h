@interface PHAssetPhotoIrisProperties : PHAssetPropertySet
@property (nonatomic) {?=qiIq} photoIrisStillDisplayTime;
@property (nonatomic) {?=qiIq} photoIrisVideoDuration;
@property (nonatomic) S photoIrisVisibilityState;
- (id)initWithFetchDictionary:asset:prefetched:;
- (unsigned short)photoIrisVisibilityState;
- (id)photoIrisStillDisplayTime;
- (id)photoIrisVideoDuration;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
