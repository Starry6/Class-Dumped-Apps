@interface PSFooterMultiHyperlinkViewLinkSpec : NSObject
@property (nonatomic) {_NSRange=QQ} linkRange;
@property (nonatomic) NSURL URL;
@property (nonatomic) @ target;
@property (nonatomic) : action;
- (SEL)action;
- (void)setAction:;
- (id)linkRange;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)setLinkRange:;
- (void)setURL:;
- (id)URL;
+ (id)specWithRange:url:;
+ (id)specWithRange:target:action:;
@end
