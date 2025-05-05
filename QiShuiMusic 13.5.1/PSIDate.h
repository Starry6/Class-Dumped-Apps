@interface PSIDate : NSObject
@property (nonatomic) q era;
@property (nonatomic) q year;
@property (nonatomic) q month;
@property (nonatomic) q day;
@property (nonatomic) q int64Representation;
@property (nonatomic) q int64RepresentationMask;
- (long long)era;
- (long long)day;
- (long long)month;
- (long long)year;
- (id)dateComponents;
- (long long)int64RepresentationMask;
- (id)initWithUniversalDate:calendar:;
- (unsigned long long)hash;
- (id)initWithDateComponents:;
- (id)description;
- (id)initWithInt64Representation:;
- (long long)int64Representation;
- (BOOL)isEqual:;
+ (id)distantFuture;
+ (id)distantPast;
@end
