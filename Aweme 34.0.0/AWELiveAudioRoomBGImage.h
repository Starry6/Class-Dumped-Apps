@interface AWELiveAudioRoomBGImage : NSObject
@property (nonatomic) q id_p;
@property (nonatomic) AWEURLModel image;
@property (nonatomic) AWEURLModel imageThumbnail;
@property (nonatomic) AWEURLModel imageAnimatedBg;
@property (nonatomic) AWEURLModel imageStaticBg;
@property (nonatomic) AWEURLModel imageNormalAvatar;
@property (nonatomic) AWEURLModel imageStartupAvatar;
@property (nonatomic) AWEURLModel imageChatJoinIcon;
@property (nonatomic) AWELiveSpeakingImageList speakingImageList;
@property (nonatomic) q bgType;
@property (nonatomic) UIColor statusBarColor;
@property (nonatomic) UIColor publicScreenColorValue;
@property (nonatomic) UIColor emptyStartColor;
@property (nonatomic) UIColor emptyEndColor;
@property (nonatomic) AWEURLModel imageColdStart;
@property (nonatomic) NSArray iconMicNormals;
@property (nonatomic) AWEURLModel iconMicLock;
@property (nonatomic) NSString colorMicLine;
@property (nonatomic) NSString colorMicText;
@property (nonatomic) NSString micBgcolorValue;
@property (nonatomic) AWEURLModel videoBg;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
@property (nonatomic) q imgType;
@property (nonatomic) BOOL isAnimatedBg;
- (id)statusBarColor;
- (void)setStatusBarColor:;
- (long long)bgType;
- (void)setBgType:;
- (id)publicScreenColorValue;
- (id)emptyStartColor;
- (id)emptyEndColor;
- (id)videoBg;
- (void)setVideoBg:;
- (BOOL)isAnimatedBg;
- (long long)imgType;
- (id)imageAnimatedBg;
- (id)imageThumbnail;
- (void)setImageThumbnail:;
- (void)setImageAnimatedBg:;
- (id)imageStaticBg;
- (void)setImageStaticBg:;
- (id)imageNormalAvatar;
- (void)setImageNormalAvatar:;
- (id)imageStartupAvatar;
- (void)setImageStartupAvatar:;
- (id)imageChatJoinIcon;
- (void)setImageChatJoinIcon:;
- (id)speakingImageList;
- (void)setSpeakingImageList:;
- (void)setPublicScreenColorValue:;
- (void)setEmptyStartColor:;
- (void)setEmptyEndColor:;
- (id)imageColdStart;
- (void)setImageColdStart:;
- (id)iconMicNormals;
- (void)setIconMicNormals:;
- (id)iconMicLock;
- (void)setIconMicLock:;
- (id)colorMicLine;
- (void)setColorMicLine:;
- (id)colorMicText;
- (void)setColorMicText:;
- (id)micBgcolorValue;
- (void)setMicBgcolorValue:;
- (void)setImgType:;
- (id)visibleRect;
- (void)setVisibleRect:;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (long long)id_p;
- (void)setId_p:;
@end
