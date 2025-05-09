@interface IESLiveSaasMatchSpliceShareHeaderView : UIView
@property (nonatomic) IESLiveImageView avatatImageView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UILabel userIDLabel;
@property (nonatomic) IESLiveImageView matchFlagImageView;
@property (nonatomic) IESLiveImageView dividingLineImageView;
@property (nonatomic) IESLiveImageView appLogoImageView;
@property (nonatomic) NSArray raceLogoURLList;
@property (nonatomic) @? downLoadCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatatImageView;
- (id)raceLogoURLList;
- (void)setUserIDLabel:;
- (id)appLogoImageView;
- (id)dividingLineImageView;
- (id)downLoadCompletion;
- (id)matchFlagImageView;
- (void)setAppLogoImageView:;
- (void)setAvatatImageView:;
- (void)setDividingLineImageView:;
- (void)setDownLoadCompletion:;
- (void)setMatchFlagImageView:;
- (void)setRaceLogoURLList:;
- (void)setUserNameLabel:;
- (void)setupAppLogoSetting;
- (void)startLoadSubviews;
- (id)userIDLabel;
- (id)userNameLabel;
- (id)init;
- (void).cxx_destruct;
- (void)loadModel;
- (void)setupSubviews;
+ (id)avatarURLs;
+ (id)nickName;
@end
