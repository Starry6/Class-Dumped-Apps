@interface CSJUgenVideoView : UgenBaseView
@property (nonatomic) CSJPlayer player;
@property (nonatomic) CSJUgenVideoPlaceholderWidget widget;
@property (nonatomic) BOOL isFittingSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertVideoWithSrc:coverSrc:;
- (BOOL)isFittingSize;
- (BOOL)isRealVideo;
- (BOOL)playFinished;
- (void)setIsFittingSize:;
- (void)updateControlElement:;
- (void)setWidget:;
- (BOOL)isPlaying;
- (void)play;
- (id)widget;
- (void)setMuted:;
- (id)player;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)pause;
@end
