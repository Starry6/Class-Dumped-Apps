@interface LynxScrollInfo : NSObject
@property (nonatomic) LynxView lynxView;
@property (nonatomic) NSString tagName;
@property (nonatomic) NSString scrollMonitorTagName;
@property (nonatomic) NSString lynxViewUrl;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) : selector;
@property (nonatomic) BOOL decelerate;
- (BOOL)decelerate;
- (id)lynxView;
- (id)lynxViewUrl;
- (id)scrollMonitorTagName;
- (void)setDecelerate:;
- (void)setLynxView:;
- (void)setScrollMonitorTagName:;
- (SEL)selector;
- (void)setScrollView:;
- (void)setSelector:;
- (unsigned long long)hash;
- (id)scrollView;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)tagName;
- (void)setTagName:;
+ (id)infoWithScrollView:tagName:scrollMonitorTagName:;
@end
