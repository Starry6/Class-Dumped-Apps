@interface AWEMusicPlaylistEditService : NSObject
- (void)selectCoverWithSourceView:trackInfo:completionBlock:;
- (void)showCoverEditWithImage:sourceView:trackInfo:completionBlock:;
+ (id)sharedInstance;
@end
