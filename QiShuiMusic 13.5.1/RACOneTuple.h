@interface RACOneTuple : RACTuple
@property (nonatomic) @ first;
- (id)initWithBackingArray:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack:;
@end
