@interface BDUPCViewConfig : NSObject
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber alpha;
@property (nonatomic) NSNumber hidden;
@property (nonatomic) NSNumber radius;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) CALayer subLayer;
- (void)setSubLayer:;
- (id)subLayer;
- (void)setRadius:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setAlpha:;
- (id)radius;
- (void)setWidth:;
- (id)hidden;
- (id)height;
- (id)width;
- (id)alpha;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setHidden:;
@end
