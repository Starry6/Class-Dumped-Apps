@interface WebElementDictionary : NSDictionary
- (id)_title;
- (void)dealloc;
- (id)keyEnumerator;
- (id)objectForKey:;
- (unsigned long long)count;
- (id)_isSelected;
- (id)_textContent;
- (id)_domNode;
- (id)_webFrame;
- (id)_altDisplayString;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_spellingToolTip;
- (id)_absoluteLinkURL;
- (id)_targetWebFrame;
- (id)_titleDisplayString;
- (id)_isLiveLink;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)initWithHitTestResult:;
- (void)_fillCache;
+ (void)initializeLookupTable;
@end
