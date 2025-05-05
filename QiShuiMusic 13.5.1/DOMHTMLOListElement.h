@interface DOMHTMLOListElement : DOMHTMLElement
@property (nonatomic) BOOL compact;
@property (nonatomic) NSInteger start;
@property (nonatomic) NSString type;
- (void)setReversed:;
- (BOOL)compact;
- (void)setStart:;
- (int)start;
- (void)setType:;
- (BOOL)reversed;
- (void)setCompact:;
- (id)type;
@end
