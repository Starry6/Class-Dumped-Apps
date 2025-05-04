@interface AWECommentLivePhotoSwitchView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) BOOL switchIsOn;
@property (nonatomic) @? handler;
- (void)updateSwitchIsOn:;
- (id)initWithFrame:isOn:;
- (void)updateSwitchState;
- (BOOL)switchIsOn;
- (void)setLabel:;
- (void)setHandler:;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (id)handler;
- (id)label;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setSwitchIsOn:;
- (void)handleTap;
@end
