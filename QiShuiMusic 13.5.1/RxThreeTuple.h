@interface RxThreeTuple : RxTuple
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
- (id)__initWithBackingStore:;
- (id)tupleByAddingObject:;
- (id)init;
- (BOOL)isEqual:;
+ (id)pack:::;
@end
