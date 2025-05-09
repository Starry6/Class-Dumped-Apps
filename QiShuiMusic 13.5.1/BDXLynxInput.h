@interface BDXLynxInput : LynxUI
@property (nonatomic) NSMutableDictionary placeholderAttributes;
@property (nonatomic) NSString placeHolderValue;
@property (nonatomic) BOOL autoHideKeyboard;
@property (nonatomic) BOOL smartScroll;
@property (nonatomic) BOOL firstScreenLayoutDidFinished;
@property (nonatomic) BOOL shouldFocusAfterLayout;
@property (nonatomic) q maxLength;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL mIsChangeFromLynx;
@property (nonatomic) NSString mFilterPattern;
@property (nonatomic) NSString mAdjustMode;
@property (nonatomic) BOOL mAutoFit;
@property (nonatomic) double mBottomInset;
@property (nonatomic) double mKeyboardHeight;
@property (nonatomic) q mInputType;
@property (nonatomic) <BDXLynxKeyListener> mKeyListener;
@property (nonatomic) double mLetterSpacing;
@property (nonatomic) double mFontSize;
@property (nonatomic) double mFontWeight;
@property (nonatomic) double mPlaceholderFontSize;
@property (nonatomic) double mPlaceholderFontWeight;
@property (nonatomic) BOOL mPlaceholderUseCustomFontSize;
@property (nonatomic) BOOL mPlaceholderUseCustomFontWeight;
@property (nonatomic) double textHeight;
@property (nonatomic) BOOL mCompatNumberType;
@property (nonatomic) BOOL mSendComposingInputEvent;
@property (nonatomic) NSString mFontFamilyName;
@property (nonatomic) NSString mPlaceholderFontFamilyName;
@property (nonatomic) BOOL mPlaceholderUseCustomFontFamily;
@property (nonatomic) BOOL fontStyleChanged;
@property (nonatomic) BOOL placeholderFontStyleChanged;
@property (nonatomic) q sourceLength;
@property (nonatomic) UIView mInputAccessoryView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)mPlaceholderUseCustomFontWeight;
- (void)setMAdjustMode:;
- (id)mFontFamilyName;
- (double)mKeyboardHeight;
- (BOOL)mPlaceholderUseCustomFontFamily;
- (void)setFont;
- (void)setMFontWeight:;
- (void)setSmartScroll:;
- (void)addText:withResult:;
- (void)applyCompatNumberType;
- (BOOL)autoHideKeyboard;
- (void)blur:withResult:;
- (double)convertFontWeightToUIFontWeight:;
- (void)emitEvent:detail:;
- (BOOL)firstScreenLayoutDidFinished;
- (void)focus:withResult:;
- (BOOL)fontStyleChanged;
- (void)getSelection:withResult:;
- (void)layoutDidFinished;
- (id)mAdjustMode;
- (BOOL)mCompatNumberType;
- (id)mFilterPattern;
- (double)mFontWeight;
- (id)mInputAccessoryView;
- (long long)mInputType;
- (BOOL)mIsChangeFromLynx;
- (id)mKeyListener;
- (double)mLetterSpacing;
- (id)mPlaceholderFontFamilyName;
- (double)mPlaceholderFontSize;
- (double)mPlaceholderFontWeight;
- (BOOL)mPlaceholderUseCustomFontSize;
- (BOOL)mSendComposingInputEvent;
- (void)onFontFaceLoad;
- (void)onListCellAppear:withList:;
- (void)onListCellDisappear:exist:withList:;
- (void)onListCellPrepareForReuse:withList:;
- (void)onWillHideKeyboard:;
- (void)onWillShowKeyboard:;
- (void)onWillShowKeyboardChanged:notification:;
- (id)placeHolderValue;
- (BOOL)placeholderFontStyleChanged;
- (void)propsDidUpdate;
- (void)resetSelectionMenu:withResult:;
- (void)select:withResult:;
- (void)sendDelEvent:withResult:;
- (void)setAdjustMode:requestReset:;
- (void)setAutoFit:requestReset:;
- (void)setAutoHideKeyboard:;
- (void)setAutoHideKeyboard:requestReset:;
- (void)setBottomInset:requestReset:;
- (void)setCaretColor:requestReset:;
- (void)setColor:requestReset:;
- (void)setCompatNumberType:requestReset:;
- (void)setConfirmType:requestReset:;
- (void)setDisabled:requestReset:;
- (void)setEnableAutoCorrect:requestReset:;
- (void)setEnableSpellCheck:requestReset:;
- (void)setFocus:requestReset:;
- (void)setFontFamily:requestReset:;
- (void)setFontSize:requestReset:;
- (void)setFontWeight:requestReset:;
- (void)setInputFilter:withResult:;
- (void)setInputTextDirection;
- (void)setLetterSpacing:requestReset:;
- (void)setLynxDirection:requestReset:;
- (void)setMAutoFit:;
- (void)setMBottomInset:;
- (void)setMFilterPattern:;
- (void)setMFontSize:;
- (void)setMInputAccessoryView:;
- (void)setMInputType:;
- (void)setMIsChangeFromLynx:;
- (void)setMKeyListener:;
- (void)setMKeyboardHeight:;
- (void)setMLetterSpacing:;
- (void)setMPlaceholderFontSize:;
- (void)setMPlaceholderFontWeight:;
- (void)setMPlaceholderUseCustomFontSize:;
- (void)setMPlaceholderUseCustomFontWeight:;
- (void)setMaxLen:requestReset:;
- (void)setPassword:requestReset:;
- (void)setPlaceHolder:requestReset:;
- (void)setPlaceHolderColor:requestReset:;
- (void)setPlaceHolderFamily:requestReset:;
- (void)setPlaceHolderFont:requestReset:;
- (void)setPlaceHolderStyle:requestReset:;
- (void)setPlaceHolderWeight:requestReset:;
- (void)setPlaceholderFont;
- (void)setReadOnly:requestReset:;
- (void)setSelectionRange:withResult:;
- (void)setSendComposingInputEvent:requestReset:;
- (void)setShowSoftInputOnFocus:requestReset:;
- (void)setSmartScroll:requestReset:;
- (void)setTextAlign:requestReset:;
- (void)setTextValue:requestReset:;
- (void)setType:requestReset:;
- (void)setValue:index:callback:;
- (void)setValue:withResult:;
- (BOOL)shouldFocusAfterLayout;
- (BOOL)smartScroll;
- (void)syncPlaceHolderDirection;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (void)updateFrame:withPadding:border:withLayoutAnimation:;
- (void)updateScrollView:showKeyboard:diff:bottomInset:userInfo:;
- (BOOL)textFieldShouldReturn:;
- (id)init;
- (BOOL)textFieldShouldBeginEditing:;
- (void)dealloc;
- (void)textFieldDidEndEditing:;
- (long long)maxLength;
- (void)setReadonly:;
- (void)setMaxLength:;
- (void)textFieldDidBeginEditing:;
- (BOOL)textFieldShouldEndEditing:;
- (void).cxx_destruct;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (BOOL)readonly;
- (void)delete:;
- (void)setPlaceHolderValue:;
- (void)textFieldDidChange:;
- (void)insertChild:atIndex:;
- (id)createView;
- (void)frameDidChange;
- (double)textHeight;
- (long long)sourceLength;
- (double)mBottomInset;
- (BOOL)mAutoFit;
- (double)mFontSize;
- (id)placeholderAttributes;
- (void)setPlaceholderAttributes:;
+ (id)__lynx_ui_method_config__112936;
+ (id)__lynx_ui_method_config__120337;
+ (id)__lynx_ui_method_config__121138;
+ (id)__lynx_ui_method_config__122339;
+ (id)__lynx_ui_method_config__107732;
+ (id)__lynx_ui_method_config__112235;
+ (id)__lynx_prop_config__100825;
+ (id)__lynx_prop_config__101626;
+ (id)__lynx_prop_config__102427;
+ (id)__lynx_prop_config__103228;
+ (id)__lynx_prop_config__104029;
+ (id)__lynx_prop_config__104830;
+ (id)__lynx_prop_config__105631;
+ (id)__lynx_prop_config__109933;
+ (id)__lynx_prop_config__110834;
+ (id)__lynx_prop_config__123640;
+ (id)__lynx_prop_config__124941;
+ (id)__lynx_prop_config__126242;
+ (id)__lynx_prop_config__128343;
+ (id)__lynx_prop_config__5594;
+ (id)__lynx_prop_config__5985;
+ (id)__lynx_prop_config__6948;
+ (id)__lynx_prop_config__7409;
+ (id)__lynx_prop_config__74810;
+ (id)__lynx_prop_config__76411;
+ (id)__lynx_prop_config__77912;
+ (id)__lynx_prop_config__78713;
+ (id)__lynx_prop_config__79514;
+ (id)__lynx_prop_config__80315;
+ (id)__lynx_prop_config__81116;
+ (id)__lynx_prop_config__82917;
+ (id)__lynx_prop_config__84318;
+ (id)__lynx_prop_config__85719;
+ (id)__lynx_prop_config__86720;
+ (id)__lynx_prop_config__88221;
+ (id)__lynx_prop_config__89322;
+ (id)__lynx_prop_config__92223;
+ (id)__lynx_prop_config__99224;
+ (id)__lynx_ui_method_config__5342;
+ (id)__lynx_ui_method_config__5413;
+ (id)__lynx_ui_method_config__6176;
+ (id)__lynx_ui_method_config__6467;
+ (void)lynxLazyLoad;
@end
