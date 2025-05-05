@interface PSSpecifierUpdateOperation : NSObject
@property (nonatomic) q operation;
@property (nonatomic) PSSpecifier specifier;
@property (nonatomic) NSNumber index;
@property (nonatomic) NSNumber toIndex;
@property (nonatomic) BOOL removingGroupSpecifierRemovesEntireGroup;
- (long long)operation;
- (void)setSpecifier:;
- (id)index;
- (id)specifier;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)toIndex;
- (void)setToIndex:;
- (BOOL)applyToArray:;
- (id)initWithOperation:specifier:index:;
- (id)initWithOperation:specifier:fromIndex:toIndex:;
- (id)initWithOperation:specifier:fromIndex:toIndex:removingGroupSpecifierRemovesEntireGroup:;
- (BOOL)removingGroupSpecifierRemovesEntireGroup;
- (void)setRemovingGroupSpecifierRemovesEntireGroup:;
+ (id)insertOperationWithSpecifier:atIndex:;
+ (id)reloadOperationWithSpecifier:atIndex:;
+ (id)removeOperationWithSpecifier:atIndex:;
+ (id)_removeOneSpecifierOnlyOperationWithSpecifier:atIndex:;
+ (id)moveOperationWithSpecifier:fromIndex:toIndex:;
@end
