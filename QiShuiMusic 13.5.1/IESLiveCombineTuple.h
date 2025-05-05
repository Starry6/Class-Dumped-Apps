@interface IESLiveCombineTuple : NSObject
@property (nonatomic) NSArray objects;
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
@property (nonatomic) @ fourth;
@property (nonatomic) @ fifth;
- (id)fifth;
- (id)initWithBackingArray:;
- (void)setFifth:;
- (id)second;
- (unsigned long long)hash;
- (id)first;
- (void)setObjects:;
- (id)objects;
- (void)setFirst:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (id)description;
- (void)setSecond:;
- (BOOL)isEqual:;
- (id)third;
- (void)setThird:;
- (id)fourth;
- (void)setFourth:;
+ (id)tupleWithObjectsFromArray:;
+ (id)tupleWithObjectsFromArray:convertNullsToNils:;
@end
