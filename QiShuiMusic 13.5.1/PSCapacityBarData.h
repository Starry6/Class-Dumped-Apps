@interface PSCapacityBarData : NSObject
@property (nonatomic) q categoryLimit;
@property (nonatomic) BOOL hideTinyCategories;
@property (nonatomic) NSInteger sortStyle;
@property (nonatomic) q capacity;
@property (nonatomic) q bytesUsed;
@property (nonatomic) NSArray categories;
@property (nonatomic) NSArray orderedCategories;
@property (nonatomic) NSArray adjustedCategories;
- (long long)capacity;
- (void)setCapacity:;
- (void)setCategories:;
- (long long)bytesUsed;
- (void).cxx_destruct;
- (id)categories;
- (id)copyWithZone:;
- (id)orderedCategories;
- (id)adjustedCategories;
- (long long)categoryLimit;
- (void)setCategoryLimit:;
- (BOOL)hideTinyCategories;
- (void)setHideTinyCategories:;
- (int)sortStyle;
- (void)setSortStyle:;
- (void)setBytesUsed:;
@end
