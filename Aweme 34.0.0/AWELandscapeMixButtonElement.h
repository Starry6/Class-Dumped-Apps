@interface AWELandscapeMixButtonElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIButton mixButton;
@property (nonatomic) AWELandscapeMixInfoButton mixInfoButton;
@property (nonatomic) BOOL hasTrackedMixEntryShow;
- (id)mixButton;
- (id)mixInfoButton;
- (void)setHasTrackedMixEntryShow:;
- (void)trackMixEntryShow;
- (void)trackMixEntryClick;
- (BOOL)hasTrackedMixEntryShow;
- (void)handleClickMix;
- (void)setMixButton:;
- (void)setMixInfoButton:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
