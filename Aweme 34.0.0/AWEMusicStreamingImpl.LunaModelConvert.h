@interface AWEMusicStreamingImpl.LunaModelConvert : NSObject
- (id)init;
+ (void)updateFeedViewModel:track:;
+ (void)updateFeedViewModel:trackInfo:;
+ (void)updateFeedViewModel:video:;
+ (void)updateFeedViewModel:videoInfo:;
+ (id)convertLunaTrackInfo:;
+ (id)convertLunaTrack:;
+ (id)convertLunaVideoInfo:;
+ (id)convertLunaVideo:;
@end
