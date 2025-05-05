@interface CADPredicate : NSPredicate
@property (nonatomic) NSArray defaultPropertiesToLoad;
@property (nonatomic) NSDictionary relatedObjectPropertiesToLoad;
@property (nonatomic) <NSFastEnumeration> databasesToQuery;
- (id)relatedObjectPropertiesToLoad;
- (BOOL)evaluateWithObject:;
- (id)defaultPropertiesToLoad;
- (id)copyMatchingItemsWithDatabase:;
- (id)databasesToQuery;
+ (void)setValidator:;
@end
