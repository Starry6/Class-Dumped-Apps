@interface ARRaycastQuery : NSObject
@property (nonatomic)  origin;
@property (nonatomic)  direction;
@property (nonatomic) q target;
@property (nonatomic) q targetAlignment;
- (id)direction;
- (id)origin;
- (long long)target;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithOrigin:direction:allowingTarget:alignment:;
- (long long)targetAlignment;
@end
