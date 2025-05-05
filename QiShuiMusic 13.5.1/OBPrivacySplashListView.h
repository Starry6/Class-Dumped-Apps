@interface OBPrivacySplashListView : UIStackView
@property (nonatomic) BOOL displayingPrivacyPane;
@property (nonatomic) NSMutableArray textViews;
@property (nonatomic) NSMutableArray stackedIconTextLists;
@property (nonatomic) UITextView footerTextView;
@property (nonatomic) BOOL underlineLinks;
- (void)updateFonts;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (BOOL)underlineLinks;
- (void)setUnderlineLinks:;
- (void)updateTextAlignment;
- (id)footerTextView;
- (id)initWithContentList:dataDetectorTypes:;
- (id)initWithContentList:dataDetectorTypes:displayingPrivacyPane:;
- (void)updateSpacing;
- (void)_updateTextViewsForLinkUITreatment:;
- (BOOL)displayingPrivacyPane;
- (void)setDisplayingPrivacyPane:;
- (id)textViews;
- (void)setTextViews:;
- (id)stackedIconTextLists;
- (void)setStackedIconTextLists:;
@end
