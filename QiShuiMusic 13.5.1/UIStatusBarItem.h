@interface UIStatusBarItem : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) # viewClass;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSInteger leftOrder;
@property (nonatomic) NSInteger rightOrder;
@property (nonatomic) NSString indicatorName;
- (int)type;
- (Class)viewClass;
- (id)description;
- (id)initWithType:;
- (long long)comparePriority:;
- (int)priority;
- (int)leftOrder;
- (int)rightOrder;
- (int)centerOrder;
- (id)indicatorName;
- (BOOL)appearsOnLeft;
- (BOOL)appearsOnRight;
- (BOOL)appearsOnCenter;
- (BOOL)appearsInRegion:;
- (long long)compareLeftOrder:;
- (long long)compareRightOrder:;
- (long long)compareCenterOrder:;
+ (id)itemWithType:idiom:;
+ (BOOL)typeIsValid:;
+ (BOOL)itemType:idiom:canBeEnabledForData:style:;
+ (BOOL)itemType:idiom:appearsInRegion:;
+ (BOOL)isItemWithTypeExclusive:outBlacklistItems:outWhitelistItems:;
@end
