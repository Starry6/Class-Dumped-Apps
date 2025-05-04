@interface AWELiveAudioFeedViewModel : NSObject
@property (nonatomic) UIImage backgroundImage;
@property (nonatomic) UIImage foregroundImage;
@property (nonatomic) BOOL shouldShowAudioLiveFeedStyleCover;
@property (nonatomic) BOOL onLive;
- (void)fetchAndUpdateAvatarImage:completion:;
- (void)fetchAndUpdateCoverImage:completion:;
- (void)fetchBackgroundImageWithRoomModel:completion:;
- (void)fetchForegroundImageWithRoomModel:userModel:completion:;
- (BOOL)shouldShowAudioLiveFeedStyleCover;
- (BOOL)isOnLive;
- (void)setOnLive:;
- (id)backgroundImage;
- (void)setBackgroundImage:;
- (id)foregroundImage;
- (void).cxx_destruct;
- (void)setForegroundImage:;
- (void)reset;
@end
