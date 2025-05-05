@interface UIAcceleration : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;
- (void)setX:;
- (void)setY:;
- (double)y;
- (void)setZ:;
- (double)x;
- (double)z;
- (void)setTimestamp:;
- (double)timestamp;
- (id)description;
@end
