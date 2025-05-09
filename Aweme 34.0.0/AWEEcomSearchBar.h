@interface AWEEcomSearchBar : AWESearchBar
@property (nonatomic) NSTimer textChangedTimer;
@property (nonatomic) NSString lastText;
@property (nonatomic) NSArray capsules;
@property (nonatomic) @? searchBarCharacterDidChange;
@property (nonatomic) @? searchBarSelectionDidChange;
@property (nonatomic) @? searchBarCapsuleDidChange;
@property (nonatomic) AWESearchBarCapsuleView capsuleView;
@property (nonatomic) NSString capsuleIcon;
@property (nonatomic) NSString originalText;
@property (nonatomic) NSString realText;
@property (nonatomic) BOOL capsuleIsDarkMode;
@property (nonatomic) Q tagType;
@property (nonatomic) AWESearchTagIcon placeHolderTagIcon;
@property (nonatomic) AWESearchTagText placeHolderTagText;
@property (nonatomic) BOOL shouldTrackCapsuleNewClick;
@property (nonatomic) NSMutableDictionary capsuleNewTrackExtraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateTextColor:;
- (void)removeCapsule;
- (void)setupCapsuleViewIfNeeded;
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
- (void)updateCapsule:;
- (void)appendCapsule:;
- (BOOL)isCapsuleShown;
- (BOOL)hasCapsule;
- (void)setCapsuleIcon:;
- (void)updateCapsuleTextColor:;
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
- (void)setShouldTrackCapsuleNewClick:;
- (id)realText;
- (void)setCapsuleIsDarkMode:;
- (unsigned long long)tagType;
- (void)textFieldDidEndEditing:;
- (BOOL)textFieldShouldClear:;
- (void)dealloc;
- (void)textFieldDidChangeSelection:;
- (id)capsuleView;
- (id)originalText;
- (void)setText:;
- (void)setOriginalText:;
- (void)setPlaceholder:;
- (id)capsuleFrame;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)invalidateTimer;
- (void)setCapsuleView:;
- (void)layoutSubviews;
- (void)textFieldDidBeginEditing:;
- (void)setTagType:;
- (void)updateTextColor;
@end
