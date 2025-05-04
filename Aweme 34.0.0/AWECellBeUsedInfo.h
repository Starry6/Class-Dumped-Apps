@interface AWECellBeUsedInfo : NSObject
@property (nonatomic) UITableViewCell cell;
@property (nonatomic) q numberOfNotUsed;
@property (nonatomic) BOOL isOffScreen;
@property (nonatomic) NSString identifierOfCell;
- (void)removeCellChildVC;
- (BOOL)canBeOptimizedForMemory;
- (long long)numberOfNotUsed;
- (void)setNumberOfNotUsed:;
- (void)setIsOffScreen:;
- (id)identifierOfCell;
- (void)setIdentifierOfCell:;
- (BOOL)isOffScreen;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
+ (id)cellBeUsedInfo:;
@end
