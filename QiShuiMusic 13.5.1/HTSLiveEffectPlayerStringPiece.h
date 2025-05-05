@interface HTSLiveEffectPlayerStringPiece : NSObject
@property (nonatomic) HTSLiveGiftMessage_TextEffect_Detail textEffect;
@property (nonatomic) UIView pieceContentView;
@property (nonatomic) double videoRatio;
@property (nonatomic) BOOL needCircle;
@property (nonatomic) double playDuration;
@property (nonatomic) Q renderContentMode;
- (id)loadBackImageView:;
- (id)loadContentLabel:;
- (BOOL)needCircle;
- (id)pieceContentView;
- (void)realShow;
- (unsigned long long)renderContentMode;
- (void)setNeedCircle:;
- (void)setPieceContentView:;
- (void)setPlayDuration:;
- (void)setRenderContentMode:;
- (void)setVideoRatio:;
- (void)showWithTextEffect:videoRatio:needCircle:;
- (double)videoRatio;
- (id)init;
- (void)dealloc;
- (void)hide;
- (void).cxx_destruct;
- (double)playDuration;
- (id)textEffect;
- (void)setTextEffect:;
@end
