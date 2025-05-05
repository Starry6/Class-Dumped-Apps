@interface MKCircle : MKShape
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) double radius;
@property (nonatomic) {?={?=dd}{?=dd}} boundingMapRect;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)boundingMapRect;
- (double)radius;
- (id)coordinate;
- (BOOL)intersectsMapRect:;
- (id)_initWithCenterCoordinate:radius:;
+ (id)circleWithCenterCoordinate:radius:;
+ (id)circleWithMapRect:;
@end
