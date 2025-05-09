@interface AWECustomSearchBar : AWESearchBar
@property (nonatomic) NSTimer textChangedTimer;
@property (nonatomic) AWESearchBarCapsuleView capsuleView;
@property (nonatomic) NSString lastText;
@property (nonatomic) NSString currentText;
@property (nonatomic) NSArray capsules;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIView rightView;
@property (nonatomic) BOOL needMoveCursorToEnd;
@property (nonatomic) BOOL enableSugFreqLimit;
@property (nonatomic) q hitTextEditOptExp;
@property (nonatomic) double lastTextChangeTime;
@property (nonatomic) @? customBarTextFieldDidBeginEditing;
@property (nonatomic) @? customBarTextFieldDidEndEditing;
@property (nonatomic) @? customBarTextFieldDidChangeSelection;
@property (nonatomic) @? customBartextFieldShouldClear;
@property (nonatomic) @? searchBarCharacterDidChange;
@property (nonatomic) @? searchBarSelectionDidChange;
@property (nonatomic) @? searchBarCapsuleDidChange;
@property (nonatomic) @? searchBarTextFieldShouldClear;
@property (nonatomic) Q style;
@property (nonatomic) Q barAppearance;
@property (nonatomic) UIColor barBorderAtmosphereColor;
@property (nonatomic) NSString capsuleIcon;
@property (nonatomic) BOOL capsuleIsDarkMode;
@property (nonatomic) BOOL isNewEcomDesign;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} leftViewFrame;
@property (nonatomic) BOOL shouldBlockSetText;
@property (nonatomic) Q tagType;
@property (nonatomic) AWESearchTagIcon placeHolderTagIcon;
@property (nonatomic) AWESearchTagText placeHolderTagText;
@property (nonatomic) NSString originalText;
@property (nonatomic) NSString realText;
@property (nonatomic) UIImage bgImage;
@property (nonatomic) BOOL allowShowScanButton;
@property (nonatomic) AWESearchSchemaModel routerModel;
@property (nonatomic) BOOL shouldTrackCapsuleNewClick;
@property (nonatomic) NSMutableDictionary capsuleNewTrackExtraParams;
@property (nonatomic) BOOL shouldShowMagnifier;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL enableSearchBigMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)awe_themeWillChange:;
- (id)initWithFrame:colorStyle:requiredHeight:font:;
- (void)removeCapsule;
- (id)routerModel;
- (void)setRouterModel:;
- (void)setCapsules:;
- (id)capsuleIcon;
- (id)capsules;
- (void)setLastText:;
- (id)searchBarCapsuleDidChange;
- (id)searchBarCharacterDidChange;
- (id)placeHolderTagText;
- (id)placeHolderTagIcon;
- (void)p_updatePlaceHolder:withImage:attributes:maxWidth:maxSize:currentString:;
- (void)setPlaceHolderTagIcon:;
- (void)setPlaceHolderTagText:;
- (void)fireTimer;
- (id)searchBarSelectionDidChange;
- (void)textChangedAction;
- (void)setTextChangedTimer:;
- (id)textChangedTimer;
- (void)capsuleViewDidClick:index:isLastItem:;
- (BOOL)shouldTrackNewClick;
- (id)getCapsuleLogExtraParams;
- (void)updateCapsule:;
- (void)appendCapsule:;
- (BOOL)isCapsuleShown;
- (BOOL)hasCapsule;
- (void)setCapsuleIcon:;
- (void)updatePlaceHolderTagIcon:tagText:withTagTypeString:;
- (void)setSearchBarCharacterDidChange:;
- (void)setSearchBarSelectionDidChange:;
- (void)setSearchBarCapsuleDidChange:;
- (void)setRealText:;
- (BOOL)capsuleIsDarkMode;
- (BOOL)shouldTrackCapsuleNewClick;
- (id)capsuleNewTrackExtraParams;
- (void)setCapsuleNewTrackExtraParams:;
- (id)lastText;
- (BOOL)isNewEcomDesign;
- (void)setIsNewEcomDesign:;
- (BOOL)enableSearchBigMode;
- (void)configTextFieldTextChangeCallback;
- (BOOL)shouldShowMagnifier;
- (id)leftViewFrame;
- (void)p_updateBarAppearance;
- (id)barBorderAtmosphereColor;
- (BOOL)enableSugInputCompletionClickFix;
- (void)textFieldDidChangeText;
- (void)setLastTextChangeTime:;
- (BOOL)enableSugFreqLimit;
- (id)customBarTextFieldDidBeginEditing;
- (id)customBarTextFieldDidEndEditing;
- (void)p_moveCursorToEnd:;
- (id)customBarTextFieldDidChangeSelection;
- (id)customBartextFieldShouldClear;
- (double)lastTextChangeTime;
- (BOOL)shouldBlockSetText;
- (void)updatePlaceholderUI;
- (BOOL)allowShowScanButton;
- (BOOL)p_enableSearchBarBigMode;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)searchBarTextFieldShouldClear;
- (void)setSearchBarTextFieldShouldClear:;
- (void)setLeftViewFrame:;
- (BOOL)needMoveCursorToEnd;
- (void)setNeedMoveCursorToEnd:;
- (long long)hitTextEditOptExp;
- (void)setHitTextEditOptExp:;
- (void)setShouldTrackCapsuleNewClick:;
- (void)setShouldShowMagnifier:;
- (id)realText;
- (void)setShouldBlockSetText:;
- (void)updateSearchBarWithTheme:;
- (void)setCapsuleIsDarkMode:;
- (void)setCustomBarTextFieldDidBeginEditing:;
- (void)setCustomBarTextFieldDidEndEditing:;
- (void)setCustomBarTextFieldDidChangeSelection:;
- (void)setCustomBartextFieldShouldClear:;
- (void)setAllowShowScanButton:;
- (void)setBarAppearance:;
- (void)setBarBorderAtmosphereColor:;
- (void)setEnableSearchBigMode:;
- (unsigned long long)tagType;
- (void)textFieldDidEndEditing:;
- (unsigned long long)barAppearance;
- (BOOL)textFieldShouldClear:;
- (void)dealloc;
- (void)selectionDidChange:;
- (void)textFieldDidChangeSelection:;
- (id)capsuleView;
- (id)originalText;
- (void)setText:;
- (void)setOriginalText:;
- (void)setPlaceholder:;
- (id)initWithFrame:;
- (void)textDidChange:;
- (unsigned long long)style;
- (void)selectionWillChange:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)invalidateTimer;
- (void)setCapsuleView:;
- (void)layoutSubviews;
- (void)textWillChange:;
- (id)backgroundImageView;
- (void)textFieldDidBeginEditing:;
- (void)setStyle:;
- (void)setCurrentText:;
- (id)currentText;
- (id)rightView;
- (void)setRightView:;
- (void)setBackgroundImageView:;
- (void)setTagType:;
- (void)updateTextColor;
- (id)bgImage;
- (void)setBgImage:;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
@end
