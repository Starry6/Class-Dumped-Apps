@interface AWEGrouponDialogContainerMarginConfig : MTLModel
@property (nonatomic) double verticalRatio;
@property (nonatomic) double horizontalRatio;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)verticalRatio;
- (void)setVerticalRatio:;
- (double)horizontalRatio;
- (void)setHorizontalRatio:;
- (double)top;
- (void)setBottom:;
- (double)right;
- (void)setTop:;
- (double)left;
- (double)bottom;
- (void)setLeft:;
- (void)setRight:;
+ (BOOL)automaticallyDefaultMapping;
@end
