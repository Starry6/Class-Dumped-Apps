@interface AWELiveFeedAudioPreviewViewWrapper : NSObject
@property (nonatomic) IESLiveFeedAudioView audioView;
@property (nonatomic) <IESLivePlayerProtocol> player;
@property (nonatomic) BOOL ignorePlayerHidden;
@property (nonatomic) IESLiveBigPartyPreStreamController bigPartyController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioView;
- (void)setAudioView:;
- (void)configWithListModel:;
- (id)getAudioView;
- (BOOL)ignorePlayerHidden;
- (void)setIgnorePlayerHidden:;
- (id)bigPartyController;
- (void)setBigPartyController:;
- (id)initWithView:;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (void)reset;
@end
