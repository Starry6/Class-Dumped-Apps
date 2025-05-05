@interface AWEMediaDownloaderABTestRegister : NSObject
@property (nonatomic) BOOL share_download_modify_md5;
@property (nonatomic) BOOL enable_caption_watermark;
@property (nonatomic) BOOL use_end_water_mark;
@property (nonatomic) BOOL enable_end_watermark_MT;
@property (nonatomic) BOOL download_video_with_mute;
@property (nonatomic) BOOL download_not_block_user;
@property (nonatomic) BOOL media_download_using_player_cache;
- (BOOL)download_not_block_user;
- (BOOL)download_video_with_mute;
- (BOOL)enable_caption_watermark;
- (BOOL)enable_end_watermark_MT;
- (BOOL)media_download_using_player_cache;
- (void)setDownload_not_block_user:;
- (void)setDownload_video_with_mute:;
- (void)setEnable_caption_watermark:;
- (void)setEnable_end_watermark_MT:;
- (void)setMedia_download_using_player_cache:;
- (void)setShare_download_modify_md5:;
- (void)setUse_end_water_mark:;
- (BOOL)share_download_modify_md5;
- (BOOL)use_end_water_mark;
- (id)init;
+ (id)sharedInstance;
@end
