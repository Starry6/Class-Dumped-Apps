@interface AWEMusicSongSelectTableViewCellModel : NSObject
@property (nonatomic) AWEMusicFeedViewModel feedModel;
@property (nonatomic) NSURL iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString author;
@property (nonatomic) NSString duration;
@property (nonatomic) NSString songFrom;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL showPreviewTag;
@property (nonatomic) q cellHeight;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)initWithMusicModel:;
- (id)feedModel;
- (void)setFeedModel:;
- (id)songFrom;
- (void)setSongFrom:;
- (void)setShowPreviewTag:;
- (BOOL)showPreviewTag;
- (id)author;
- (BOOL)playing;
- (void)setPlaying:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (id)title;
- (void)setAuthor:;
- (void)setTitle:;
- (long long)cellHeight;
- (void)setCellHeight:;
@end
