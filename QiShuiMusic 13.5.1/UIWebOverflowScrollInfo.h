@interface UIWebOverflowScrollInfo : NSObject
@property (nonatomic) DOMNode node;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) BOOL isUserScroll;
- (id)node;
- (void)setOffset:;
- (void)dealloc;
- (id)offset;
- (void)setNode:;
- (id)initWithNode:offset:isUserScroll:;
- (BOOL)coalesceScrollForNode:offset:isUserScroll:;
- (BOOL)isUserScroll;
- (void)setIsUserScroll:;
@end
