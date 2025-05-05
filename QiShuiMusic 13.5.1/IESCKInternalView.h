@interface IESCKInternalView : NSObject
@property (nonatomic) UIView rawView;
@property (nonatomic) NSString viewType;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) {CGSize=dd} size;
- (id)rawView;
- (id)initWithRawView:;
- (void)setRawView:;
- (id)viewType;
- (void)setInsets:;
- (id)insets;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
- (void)setViewType:;
@end
