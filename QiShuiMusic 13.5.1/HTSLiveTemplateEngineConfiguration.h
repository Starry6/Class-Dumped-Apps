@interface HTSLiveTemplateEngineConfiguration : NSObject
@property (nonatomic) BOOL checkSensitiveNickName;
@property (nonatomic) BOOL shouldFilterIcon;
@property (nonatomic) q nickNameCutLength;
@property (nonatomic) BOOL allowAnimatedImage;
@property (nonatomic) BOOL forceUseLocalColor;
@property (nonatomic) UIColor localContentColor;
@property (nonatomic) UIColor localUserTextColor;
@property (nonatomic) UIColor localGiftTextColor;
@property (nonatomic) UIColor localPatternTextColor;
@property (nonatomic) double localPatternFontSize;
@property (nonatomic) double imageMaxHeight;
@property (nonatomic) NSAttributedString imagePlaceHolderContent;
@property (nonatomic) double imageScalingRateWithFont;
@property (nonatomic) double checkImageScaleFromURI;
@property (nonatomic) double overlapSpace;
@property (nonatomic) BOOL makeEmojiSizeEqualToWordFontSize;
@property (nonatomic) NSArray filterBadgeUserIDs;
@property (nonatomic) HTSLiveUser userModel;
@property (nonatomic) BOOL enableLogNode;
@property (nonatomic) IESLiveTemplateEngineLogNode logNode;
@property (nonatomic) NSDictionary pieceValues;
@property (nonatomic) BOOL enableAllImageCache;
@property (nonatomic) BOOL enableCenterImageAlignment;
@property (nonatomic) double badgeScale;
@property (nonatomic) BOOL showNewVipBadge;
- (id)logNode;
- (void)setPieceValues:;
- (BOOL)showNewVipBadge;
- (BOOL)allowAnimatedImage;
- (double)badgeScale;
- (double)checkImageScaleFromURI;
- (BOOL)checkSensitiveNickName;
- (BOOL)enableAllImageCache;
- (BOOL)enableCenterImageAlignment;
- (BOOL)enableLogNode;
- (id)filterBadgeUserIDs;
- (BOOL)forceUseLocalColor;
- (id)imagePlaceHolderContent;
- (double)imageScalingRateWithFont;
- (id)localContentColor;
- (id)localGiftTextColor;
- (double)localPatternFontSize;
- (id)localPatternTextColor;
- (id)localUserTextColor;
- (BOOL)makeEmojiSizeEqualToWordFontSize;
- (long long)nickNameCutLength;
- (double)overlapSpace;
- (id)pieceValues;
- (void)setAllowAnimatedImage:;
- (void)setBadgeScale:;
- (void)setCheckImageScaleFromURI:;
- (void)setCheckSensitiveNickName:;
- (void)setEnableAllImageCache:;
- (void)setEnableCenterImageAlignment:;
- (void)setEnableLogNode:;
- (void)setFilterBadgeUserIDs:;
- (void)setForceUseLocalColor:;
- (void)setImagePlaceHolderContent:;
- (void)setImageScalingRateWithFont:;
- (void)setLocalContentColor:;
- (void)setLocalGiftTextColor:;
- (void)setLocalPatternFontSize:;
- (void)setLocalPatternTextColor:;
- (void)setLocalUserTextColor:;
- (void)setLogNode:;
- (void)setMakeEmojiSizeEqualToWordFontSize:;
- (void)setNickNameCutLength:;
- (void)setOverlapSpace:;
- (void)setShouldFilterIcon:;
- (void)setShowNewVipBadge:;
- (BOOL)shouldFilterIcon;
- (void)setUserModel:;
- (id)userModel;
- (void).cxx_destruct;
- (double)imageMaxHeight;
- (void)setImageMaxHeight:;
+ (id)defaultConfiguration;
@end
