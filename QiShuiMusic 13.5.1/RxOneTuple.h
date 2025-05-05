@interface RxOneTuple : RxTuple
@property (nonatomic) @ first;
- (id)__initWithBackingStore:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack:;
@end
