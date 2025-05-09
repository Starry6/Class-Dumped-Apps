@interface AWERTVTextInputViewController : UIViewController
@property (nonatomic) AWEGrowingTextView textView;
@property (nonatomic) q currentInputType;
@property (nonatomic) q oldInputType;
@property (nonatomic) <RTVXRControllerInjector> controllerInjector;
@property (nonatomic) <RTVColorAdaptorInterface> colorAdaptor;
@property (nonatomic) <RTVVoipResourceFetcherInterface> resourceFetcher;
@property (nonatomic) <IESIMLittleEmoticonMatcher> emoticonDataManager;
@property (nonatomic) UIView inputBar;
@property (nonatomic) UIView keyboardContainerView;
@property (nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> emoticonView;
@property (nonatomic) UIButton emoticonBtn;
@property (nonatomic) UIButton sendBtn;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} keyboardBounds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <RTVTextInputControllerDelegate> delegate;
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
- (void)growingTextViewDidChange:;
- (void)growingTextView:willChangeHeight:;
- (BOOL)growingTextView:shouldChangeTextInRange:replacementText:;
- (void)rtv_awakeFromControllerInjector;
- (void)emoticonView:didSelectEmoticon:theme:themeView:indexPath:;
- (void)emoticonViewDidSelectDelete:;
- (void)emoticonViewDidSendText:;
- (id)emoticonView;
- (id)inputVCFoldedFrame;
- (double)defaultInputHeight;
- (void)emoticonBtnClicked:;
- (void)__addObservers;
- (id)resourceFetcher;
- (void)__layoutComponents;
- (void)setEmoticonView:;
- (void)handleKeyboardShowNoti:;
- (void)handleKeyboardHideNoti:;
- (id)emoticonBtn;
- (void)setEmoticonBtn:;
- (void)setInputBar:;
- (id)inputBar;
- (id)controllerInjector;
- (id)emoticonDataManager;
- (void)__configComponents;
- (void)__removeObservers;
- (void)__createComponnets;
- (id)colorAdaptor;
- (id)keyboardBounds;
- (id)keyboardContainerView;
- (void)sendBtnClicked:;
- (id)sendBtn;
- (double)emoticonContentViewHeight;
- (void)setCurrentInputType:;
- (id)inputVCFoldedFrame:;
- (void)setOldInputType:;
- (void)resetButtonsSelected;
- (void)refreshInputVCFrame:;
- (id)inputVCUnfoldFrame:;
- (void)updateRightButtonsBottom;
- (BOOL)__checkTextViewTextMessageLength;
- (void)sendTextViewTextMessage;
- (void)__layoutSubviews;
- (void)didUpdateInputVCFrame;
- (BOOL)__successRefreshTextViewUI;
- (void)setKeyboardBounds:;
- (long long)oldInputType;
- (void)setKeyboardContainerView:;
- (void)setSendBtn:;
- (id)textView;
- (void)setTextView:;
- (void)setContentInsets:;
- (void)dealloc;
- (id)delegate;
- (void)showKeyboard;
- (void)hideKeyboard;
- (id)contentInsets;
- (void)viewDidLoad;
- (long long)currentInputType;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (id)inputText;
@end
