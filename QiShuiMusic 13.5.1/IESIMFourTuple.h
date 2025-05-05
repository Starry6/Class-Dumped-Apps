@interface IESIMFourTuple : IESIMTuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
@property (nonatomic) @ fourth;
- (id)initWithBackingArray:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack::::;
@end
