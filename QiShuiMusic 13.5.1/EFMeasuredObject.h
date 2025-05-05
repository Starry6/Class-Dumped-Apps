@interface EFMeasuredObject : NSObject
@property (nonatomic) @ object;
@property (nonatomic) double measure;
- (void)setObject:;
- (double)measure;
- (long long)compare:;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)initWithObject:measure:;
- (void)setMeasure:;
+ (id)max:;
+ (id)object:withMeasure:;
+ (id)reverseSortedObjects:limit:;
@end
