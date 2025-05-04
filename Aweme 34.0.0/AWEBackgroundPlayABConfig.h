@interface AWEBackgroundPlayABConfig : NSObject
+ (BOOL)enableBgPlayAutoPlay;
+ (BOOL)enablePortraitBgPlayAutoPlay:tabName:;
+ (BOOL)shouldEnableLandscapeBGPlayAutoNextFeature:model:;
+ (BOOL)enableLandscapeBgPlayAutoPlay:;
+ (id)bgPlayAutoPlayDict;
+ (id)enablePortraitEnterFromScene;
+ (id)enablePortraitTabNameScene;
+ (id)enableLandscapeEnterFromScene;
@end
