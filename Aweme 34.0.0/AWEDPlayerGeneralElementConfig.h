@interface AWEDPlayerGeneralElementConfig : NSObject
@property (nonatomic) Q elementType;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) {UIEdgeInsets=dddd} hitTestEdgeInsets;
@property (nonatomic) {CGSize=dd} buttonSize;
@property (nonatomic) @? createIconBlock;
- (void)setCreateIconBlock:;
- (id)createIconBlock;
- (id)buttonSize;
- (id)iconImage;
- (id)hitTestEdgeInsets;
- (void)setIconImage:;
- (id)edgeInsets;
- (void)setHitTestEdgeInsets:;
- (void)setEdgeInsets:;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)setButtonSize:;
- (void)setElementType:;
- (id)initWithElementType:;
@end
