@interface ICDocCamShutterButton : UIButton
@property (nonatomic) BOOL pseudoDisabled;
- (void)commonInit;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (id)innerCircle;
- (id)outerRingImage;
- (void)setPseudoDisabled:;
- (BOOL)isPseudoDisabled;
@end
