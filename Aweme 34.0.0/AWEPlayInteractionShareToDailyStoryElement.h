@interface AWEPlayInteractionShareToDailyStoryElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEButton shareButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (BOOL)shouldActivateButtonWithData:;
- (void)showShareButtonIfNeeded;
- (void)trackShareWithEventType:;
- (BOOL)shouldShowShareToDailyStoryButton;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didTapShare:;
- (void)setShareButton:;
- (id)shareButton;
+ (BOOL)shouldMusicInfoActiveWithData:context:;
@end
