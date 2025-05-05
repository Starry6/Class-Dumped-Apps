@interface WebEventRegion : NSObject
- (BOOL)hitTest:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)quad;
- (id)initWithPoints::::;
- (id)p1;
- (id)p2;
- (id)p3;
- (id)p4;
@end
