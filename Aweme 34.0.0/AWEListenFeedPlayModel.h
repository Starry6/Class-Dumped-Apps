@interface AWEListenFeedPlayModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) BOOL isSameVideo;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double totalPlaybackTime;
@property (nonatomic) double speed;
- (void)setCoverImage:;
- (void)setIsSameVideo:;
- (BOOL)isSameVideo;
- (void)setTotalPlaybackTime:;
- (double)totalPlaybackTime;
- (id)itemID;
- (void)setSpeed:;
- (void)setItemID:;
- (double)speed;
- (BOOL)isPlaying;
- (void)setCurrentPlaybackTime:;
- (void).cxx_destruct;
- (double)currentPlaybackTime;
- (void)setIsPlaying:;
- (id)coverImage;
@end
