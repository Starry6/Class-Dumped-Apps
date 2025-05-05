@interface WKDOMTextIterator : NSObject
@property (nonatomic) BOOL atEnd;
@property (nonatomic) WKDOMRange currentRange;
@property (nonatomic) Q currentTextLength;
@property (nonatomic) r^S currentTextPointer;
- (id)initWithRange:;
- (void).cxx_destruct;
- (id)currentRange;
- (id).cxx_construct;
- (BOOL)atEnd;
- (void)advance;
- (id)currentTextPointer;
- (unsigned long long)currentTextLength;
@end
