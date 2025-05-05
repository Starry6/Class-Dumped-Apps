@interface IESIMOneTuple : IESIMTuple
@property (nonatomic) @ first;
- (id)initWithBackingArray:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack:;
@end
