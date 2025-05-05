@interface WebTextIterator : NSObject
- (void)dealloc;
- (id)initWithRange:;
- (id)currentRange;
- (BOOL)atEnd;
- (id)currentText;
- (void)advance;
- (id)currentTextPointer;
- (unsigned long long)currentTextLength;
- (id)currentNode;
@end
