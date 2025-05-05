@interface UITextRangeImpl : UITextRange
@property (nonatomic) DOMRange domRange;
@property (nonatomic) q affinity;
- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (long long)affinity;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)adjustAffinityOfPosition:isStart:;
- (id)domRange;
- (void)setDomRange:;
- (void)setAffinity:;
+ (id)wrapDOMRange:withAffinity:;
+ (id)wrapDOMRange:;
@end
