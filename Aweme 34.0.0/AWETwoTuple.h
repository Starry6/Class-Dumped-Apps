@interface AWETwoTuple : AWETuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
- (id)initWithBackingArray:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack::;
@end
