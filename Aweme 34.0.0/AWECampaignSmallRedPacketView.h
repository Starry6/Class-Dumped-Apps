@interface AWECampaignSmallRedPacketView : UIView
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) IESLiveVideoGiftController alphaPlayer;
@property (nonatomic) NSString campaignID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishPlayingWithError:;
- (id)initWithCampaignID:;
- (id)alphaPlayer;
- (void)setAlphaPlayer:;
- (id)campaignID;
- (void).cxx_destruct;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
- (void)setCampaignID:;
@end
