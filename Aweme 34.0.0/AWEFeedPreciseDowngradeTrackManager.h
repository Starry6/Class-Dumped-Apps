@interface AWEFeedPreciseDowngradeTrackManager : NSObject
+ (BOOL)enablePreciseDowngradeTrack;
+ (void)trackNetProtector431EventWithFrom:totalSize:urlString:paramsDic:;
+ (void)trackNetProtectorEventWithFrom:errorCode:urlString:paramsDic:;
@end
