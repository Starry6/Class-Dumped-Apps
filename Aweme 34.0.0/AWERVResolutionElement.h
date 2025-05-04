@interface AWERVResolutionElement : AWERelatedVideoPlayBaseElement
@property (nonatomic) UIButton resolutionButton;
@property (nonatomic) Q currentResolution;
@property (nonatomic) DUXSelectPopover resolutionSelectPopover;
- (void)initializeElement;
- (void)bindEvent;
- (id)aAWEPadRTVAdapter;
- (id)resolutionButton;
- (void)refreshResolutionButton:;
- (void)setResolutionButton:;
- (id)resolutionSelectPopover;
- (void)setResolutionSelectPopover:;
- (void)showResolutionSelectView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)currentResolution;
- (void)setCurrentResolution:;
+ (Class)aAWEPadRTVAdapterClass;
@end
