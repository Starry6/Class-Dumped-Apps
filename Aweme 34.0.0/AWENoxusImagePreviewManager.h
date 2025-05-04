@interface AWENoxusImagePreviewManager : NSObject
+ (id)framePreviewImageForProgress:totalDuration:originalImage:infoModel:;
+ (void)fetchPreviewImageWithInfoModel:completion:;
@end
