@interface AWESettingsMockEnumArray : NSObject
@property (nonatomic) NSMutableArray innerArray;
- (id)innerArray;
- (void)setInnerArray:;
- (void)insertObjectAtFront:;
- (unsigned long long)indexOfEnumData:;
- (id)enumDataAtIndex:;
- (id)enumDescAtIndex:;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (void)addObject:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)copyWithZone:;
+ (id)boolArray;
+ (id)arrayWithArray:;
+ (id)arrayWithObjects:;
@end
