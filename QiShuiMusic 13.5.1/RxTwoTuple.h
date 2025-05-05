@interface RxTwoTuple : RxTuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
- (id)__initWithBackingStore:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack::;
@end
