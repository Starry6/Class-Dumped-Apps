@interface RVItem : NSObject
@property (nonatomic) q type;
@property (nonatomic) q normalizedType;
@property (nonatomic) NSURL url;
@property (nonatomic) DDScannerResult ddResult;
@property (nonatomic) NSString text;
@property (nonatomic) NSString contactPropertyValue;
@property (nonatomic) q contactPropertyType;
@property (nonatomic) q selectionType;
@property (nonatomic) NSString textSearchContext;
@property (nonatomic) NSString leadingText;
@property (nonatomic) NSString trailingText;
@property (nonatomic) NSString originalSelectedText;
@property (nonatomic) RVQuery query;
@property (nonatomic) @? textQueryProvider;
@property (nonatomic) @? reportAnIssueBlock;
@property (nonatomic) @? lookupContextFetchingBlock;
@property (nonatomic) {_NSRange=QQ} highlightRange;
@property (nonatomic) NSURL normalizedURL;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) @ clientHints;
- (id)url;
- (id)query;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)text;
- (id)leadingText;
- (id)trailingText;
- (id)initWithText:selectedRange:;
- (id)initWithText:clickedIndex:selectionRanges:shouldUpdateSelection:;
- (id)ddResult;
- (id)highlightRange;
- (long long)selectionType;
- (void)normalize;
- (void)setTrailingText:;
- (void)setLeadingText:;
- (id)normalizedURL;
- (id)initWithURL:rangeInContext:;
- (id)initWithDDResult:;
- (long long)normalizedType;
- (id)originalSelectedText;
- (id)textQueryProvider;
- (id)reportAnIssueBlock;
- (void)setReportAnIssueBlock:;
- (id)initWithSearchQuery:rangeInContext:;
- (void)setClientHints:;
- (id)clientHints;
- (void)setTextQueryProvider:;
- (id)initWithText:selectedRange:customURLParser:;
- (void)commonInitWithText:selectedRange:customURLParser:lookup:;
- (id)initWithClientIdentifier:rangeInContext:;
- (id)initWithContactProperty:value:rangeInContext:;
- (id)textSearchRange;
- (id)textSearchContext;
- (void)normalizeWithParser:lookupOnly:;
- (id)getClientHintKey:ofType:;
- (id)constrainContextSubstring:range:leading:;
- (id)contactPropertyValue;
- (long long)contactPropertyType;
- (void)setOriginalSelectedText:;
- (id)lookupContextFetchingBlock;
- (void)setLookupContextFetchingBlock:;
+ (BOOL)supportsSecureCoding;
@end
