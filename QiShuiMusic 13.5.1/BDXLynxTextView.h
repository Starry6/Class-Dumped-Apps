@interface BDXLynxTextView : UITextView
@property (nonatomic) NSString placeHolder;
@property (nonatomic) UIColor placeHolderColor;
@property (nonatomic) UIFont placeHolderFont;
@property (nonatomic) {UIEdgeInsets=dddd} placeHolderEdgeInsets;
@property (nonatomic) UITextView placeHolderTextView;
@property (nonatomic) double mPlaceHolderFontSize;
@property (nonatomic) double mPlaceHolderFontWeight;
@property (nonatomic) BOOL isCustomPlaceHolderFontSize;
@property (nonatomic) BOOL isCustomPlaceHolderFontWeight;
@property (nonatomic) q mTextAlignment;
@property (nonatomic) BOOL mEnableRichText;
@property (nonatomic) NSString mPlaceholderFontFamilyName;
@property (nonatomic) BOOL isCustomPlaceHolderFontFamily;
@property (nonatomic) LynxFontFaceContext fontFaceContext;
@property (nonatomic) BOOL waitingDictationRecognition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fontFaceContext;
- (BOOL)mEnableRichText;
- (id)placeHolderFont;
- (void)setIsCustomPlaceHolderFontSize:;
- (id)calcCorrectCaretRectFromSuperClassCaretRect:;
- (id)getRawText;
- (id)getRawTextInAttributedString:;
- (BOOL)isCustomPlaceHolderFontFamily;
- (BOOL)isCustomPlaceHolderFontSize;
- (BOOL)isCustomPlaceHolderFontWeight;
- (double)mPlaceHolderFontSize;
- (double)mPlaceHolderFontWeight;
- (id)mPlaceholderFontFamilyName;
- (long long)mTextAlignment;
- (void)onFontFaceLoad;
- (id)placeHolderColor;
- (id)placeHolderEdgeInsets;
- (id)placeHolderTextView;
- (void)refreshPlaceHolderFont;
- (void)setFontFaceContext:;
- (void)setIsCustomPlaceHolderFontFamily:;
- (void)setIsCustomPlaceHolderFontWeight:;
- (void)setMEnableRichText:;
- (void)setMPlaceHolderFontSize:;
- (void)setMPlaceHolderFontWeight:;
- (void)setMPlaceholderFontFamilyName:;
- (void)setMTextAlignment:;
- (void)setPlaceHolderColor:;
- (void)setPlaceHolderEdgeInsets:;
- (void)setPlaceHolderFont:;
- (void)setPlaceHolderTextView:;
- (void)showOrHidePlaceHolder;
- (void)syncPlaceHolderDirection:;
- (void)syncPlaceHolderLetterSpacing:;
- (void)syncPlaceHolderTextAligment;
- (BOOL)waitingDictationRecognition;
- (id)insertDictationResultPlaceholder;
- (id)init;
- (void)removeDictationResultPlaceholder:willInsertResult:;
- (id)caretRectForPosition:;
- (void)cut:;
- (void)copy:;
- (void).cxx_destruct;
- (void)paste:;
- (void)setTextAlignment:;
- (long long)editingInteractionConfiguration;
- (id)placeHolder;
- (void)setPlaceHolder:;
@end
