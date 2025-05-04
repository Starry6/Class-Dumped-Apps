@interface AWEGrouponDialogContainerLayoutGravity : MTLModel
@property (nonatomic) BOOL left;
@property (nonatomic) BOOL right;
@property (nonatomic) BOOL top;
@property (nonatomic) BOOL bottom;
@property (nonatomic) BOOL center;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)top;
- (BOOL)center;
- (void)setCenter:;
- (void)setBottom:;
- (BOOL)right;
- (void)setTop:;
- (BOOL)left;
- (BOOL)bottom;
- (void)setLeft:;
- (void)setRight:;
+ (BOOL)automaticallyDefaultMapping;
@end
