@interface RACThreeTuple : RACTuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
- (id)initWithBackingArray:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack:::;
@end
