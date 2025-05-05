@interface NSTextElement : NSObject
@property (nonatomic) C coalescingType;
@property (nonatomic) BOOL isBeginningOfDocument;
@property (nonatomic) BOOL isEndOfDocument;
@property (nonatomic) NSTextContentManager textContentManager;
@property (nonatomic) NSTextRange elementRange;
@property (nonatomic) NSArray childElements;
@property (nonatomic) NSTextElement parentElement;
@property (nonatomic) BOOL isRepresentedElement;
- (id)textContentManager;
- (BOOL)isBeginningOfDocument;
- (void)setTextContentManager:;
- (id)parentElement;
- (id)_firstRepresentableChildElement;
- (id)elementRange;
- (BOOL)isRepresentedElement;
- (id)childElements;
- (id)childTextElementForLocation:elementIndex:;
- (id)init;
- (void)setElementRange:;
- (void)setCoalescingType:;
- (unsigned char)coalescingType;
- (id)initWithTextContentManager:;
- (void)dealloc;
- (BOOL)isEndOfDocument;
- (id)estimatedIntrinsicContentSizeForTextLayoutManager:;
+ (long long)_searchElements:forLocation:;
@end
