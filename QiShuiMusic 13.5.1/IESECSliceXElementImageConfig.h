@interface IESECSliceXElementImageConfig : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) UIImage placeholder;
@property (nonatomic) {CGSize=dd} preferredSize;
@property (nonatomic) IESECSliceXElementViewContext elementViewContext;
@property (nonatomic) @? complete;
- (id)elementViewContext;
- (void)setElementViewContext:;
- (id)complete;
- (id)url;
- (id)initWithURL:;
- (id)placeholder;
- (void)setPlaceholder:;
- (void).cxx_destruct;
- (void)setComplete:;
- (id)preferredSize;
- (void)setPreferredSize:;
@end
