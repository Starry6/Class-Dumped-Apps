@interface IESIMFiveTuple : IESIMTuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
@property (nonatomic) @ fourth;
@property (nonatomic) @ fifth;
- (id)initWithBackingArray:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack:::::;
@end
