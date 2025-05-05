@interface IESECGuideManager : NSObject
+ (BOOL)hasShown3DGuide;
+ (void)resetAllGuide;
+ (void)setHasShown3DGuide:;
+ (id)kvStore;
+ (void)setBool:forKey:;
+ (BOOL)boolForKey:;
@end
