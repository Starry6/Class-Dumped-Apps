@interface AWEAwemeDetailVoiceOverController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL isDidCallConfigVoiceOverElements;
@property (nonatomic) AWEAwemeDetailVoiceOverControllerMultipleDelegateDispatcher multipleDelegateDispatcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configVoiceOverElements;
- (void)addListenerForMultipleDelegateDispatcher:;
- (id)multipleDelegateDispatcher;
- (void)updateVoiceOverElement:;
- (BOOL)isDidCallConfigVoiceOverElements;
- (void)setIsDidCallConfigVoiceOverElements:;
- (void)setMultipleDelegateDispatcher:;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
