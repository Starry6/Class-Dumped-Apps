@interface IESECVideoInfo : NSObject
@property (nonatomic) NSString videoMainPlayURL;
@property (nonatomic) NSString videoBackupPlayURL;
@property (nonatomic) NSString videoID;
@property (nonatomic) NSNumber videoWidth;
@property (nonatomic) NSNumber videoHeight;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString coverImageURL;
@property (nonatomic) BOOL needCookie;
- (BOOL)needCookie;
- (void)setNeedCookie:;
- (void)setVideoBackupPlayURL:;
- (void)setVideoMainPlayURL:;
- (id)videoBackupPlayURL;
- (id)videoMainPlayURL;
- (void)setVideoHeight:;
- (id)videoWidth;
- (void)setVideoWidth:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (id)videoHeight;
- (id)videoID;
- (void)setVideoID:;
- (void)setCoverImageURL:;
- (id)coverImageURL;
@end
