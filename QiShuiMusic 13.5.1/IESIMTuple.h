@interface IESIMTuple : NSObject
@property (nonatomic) NSArray backingArray;
@property (nonatomic) Q count;
@property (nonatomic) @ first;
@property (nonatomic) @ second;
@property (nonatomic) @ third;
@property (nonatomic) @ fourth;
@property (nonatomic) @ fifth;
@property (nonatomic) @ last;
- (id)backingArray;
- (id)fifth;
- (id)initWithBackingArray:;
- (id)tupleByAddingObject:;
- (id)init;
- (id)last;
- (id)second;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)objectAtIndexedSubscript:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)first;
- (void)encodeWithCoder:;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (id)description;
- (id)allObjects;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)third;
- (id)fourth;
+ (id)tupleWithObjects:;
+ (id)tupleWithObjectsFromArray:;
+ (id)tupleWithObjectsFromArray:convertNullsToNils:;
@end
