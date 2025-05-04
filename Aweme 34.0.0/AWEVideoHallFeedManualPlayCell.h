@interface AWEVideoHallFeedManualPlayCell : AWEVideoHallFeedCell
@property (nonatomic) UIImageView playImageView;
@property (nonatomic) @? videoWillPlayManually;
@property (nonatomic) @? videoDidPlayFinish;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initSubviews;
- (void)handlePlayerTap;
- (void)showFinishView;
- (void)videoWillReapeatTriggeredByMetaView;
- (void)configWithPreviewModel:context:logExtraDict:;
- (id)videoWillPlayManually;
- (id)videoDidPlayFinish;
- (void)setVideoWillPlayManually:;
- (void)setVideoDidPlayFinish:;
- (void)play;
- (void).cxx_destruct;
- (void)stop;
- (void)initConstraints;
- (id)playImageView;
- (void)setPlayImageView:;
@end
