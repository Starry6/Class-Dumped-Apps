@interface RxFourTuple : RxTuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
@property (nonatomic) @ fourth;
- (id)__initWithBackingStore:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack::::;
@end
