@interface AWECommentAudioInputView : UIView
@property (nonatomic) UIView videoTabView;
@property (nonatomic) UIView audioTabView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView recordImageView;
@property (nonatomic) Q status;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) NSMutableDictionary textMap;
@property (nonatomic) NSMutableDictionary textColorMap;
@property (nonatomic) NSMutableDictionary bgColorMap;
@property (nonatomic) UILongPressGestureRecognizer longGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView<AWECommentAudioRecorderViewProtocol> recoderAnimationView;
@property (nonatomic) <AWECommentAudioRefactorInputViewDelegate> refactorDelegate;
@property (nonatomic) <AWECommentAudioInputViewDelegate> delegate;
@property (nonatomic) <AWECommentInputViewProtocol> listInputView;
@property (nonatomic) NSString defaultText;
@property (nonatomic) BOOL startWithLongPress;
@property (nonatomic) UIColor defaultTextColor;
@property (nonatomic) UIColor defaultBgColor;
@property (nonatomic) UIView startScaleView;
@property (nonatomic) BOOL initiativeCancel;
- (void)p_setupUI;
- (void)showRecorderAnimation;
- (void)dismissRecorderAnimation;
- (void)stopRecord;
- (id)videoTabView;
- (id)audioTabView;
- (id)refactorDelegate;
- (void)setRefactorDelegate:;
- (id)listInputView;
- (void)setListInputView:;
- (BOOL)startWithLongPress;
- (void)setStartWithLongPress:;
- (void)setDefaultBgColor:;
- (id)startScaleView;
- (void)setStartScaleView:;
- (BOOL)initiativeCancel;
- (void)setInitiativeCancel:;
- (void)setText:forStatus:;
- (void)setTextColor:forStatus:;
- (void)setBgColor:forStatus:;
- (void)refreshColor;
- (void)handleGes:;
- (void)startRecord;
- (void)cancelRecord;
- (void)setRecordImageView:;
- (void)setLongGesture:;
- (id)recoderAnimationView;
- (void)actionLongPress:;
- (id)textMap;
- (id)textColorMap;
- (id)bgColorMap;
- (id)longGesture;
- (void)setRecoderAnimationView:;
- (void)didClickRecorderAnimationCancelButton;
- (void)didClickRecorderAnimationSendButton;
- (void)setVideoTabView:;
- (void)setAudioTabView:;
- (void)setTextMap:;
- (void)setTextColorMap:;
- (void)setBgColorMap:;
- (id)textLabel;
- (void)setStartPoint:;
- (id)delegate;
- (void)willMoveToSuperview:;
- (void)setStatus:;
- (id)startPoint;
- (id)initWithFrame:;
- (id)defaultTextColor;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setDelegate:;
- (void)setTextLabel:;
- (void)setDefaultText:;
- (id)defaultText;
- (id)recordImageView;
- (id)defaultBgColor;
- (void)setDefaultTextColor:;
@end
