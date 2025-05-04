@interface AWEAdFeedDoubleClickModel : BDXBridgeModel
@property (nonatomic) double x;
@property (nonatomic) double y;
- (double)x;
- (void)setY:;
- (double)y;
- (void)setX:;
+ (BOOL)automaticallyDefaultMapping;
@end
