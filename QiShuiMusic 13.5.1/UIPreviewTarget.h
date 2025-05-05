@interface UIPreviewTarget : NSObject
@property (nonatomic) UIView container;
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
- (id)center;
- (id)init;
- (void)dealloc;
- (id)container;
- (id)transform;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithContainer:center:transform:;
- (id)initWithContainer:center:;
+ (id)new;
@end
