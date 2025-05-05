@interface SCNBoundingBox : NSObject
@property (nonatomic) {SCNVector3=fff} min;
@property (nonatomic) {SCNVector3=fff} max;
- (id)min;
- (id)max;
- (void)setMax:;
- (id)description;
- (void)setMin:;
@end
