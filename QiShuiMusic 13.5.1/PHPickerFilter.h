@interface PHPickerFilter : NSObject
@property (nonatomic) <PUPickerFilter> _puPickerFilter;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_puPickerFilter;
- (id)_initWithPUPickerFilter:;
+ (id)imagesFilter;
+ (id)anyFilterMatchingSubfilters:;
+ (id)livePhotosFilter;
+ (id)playbackStyleFilter:;
+ (id)allFilterMatchingSubfilters:;
+ (id)notFilterOfSubfilter:;
+ (id)_depthEffectPhotosFilter;
+ (id)cinematicVideosFilter;
+ (id)timelapseVideosFilter;
+ (id)slomoVideosFilter;
+ (id)screenRecordingsFilter;
+ (id)screenshotsFilter;
+ (id)panoramasFilter;
+ (id)burstsFilter;
+ (id)depthEffectPhotosFilter;
+ (id)videosFilter;
@end
