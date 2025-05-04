@interface AWERelatedVideoPlayFullScreenElement : AWERelatedVideoPlayBaseElement
@property (nonatomic) UIButton fullScreenButton;
@property (nonatomic) DUXPopover fullScreenButtonPopover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)popoverDidDisappear:;
- (void)initializeElement;
- (void)setHide:;
- (id)aAWEPadModuleAdapter;
- (void)bindEvent;
- (void)setFullScreenButton:;
- (id)fullScreenButtonPopover;
- (void)updateFullScreenButton:;
- (void)setFullScreenButtonPopover:;
- (void)hideFullScreenButtonPopover;
- (void)showFullScreenButtonPopover;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)fullScreenButton;
- (void)reset;
+ (Class)aAWEPadModuleAdapterClass;
@end
