@interface IESECWinCategoryObject : NSObject
@property (nonatomic) NSArray categoryList;
@property (nonatomic) double stickyHeight;
@property (nonatomic) BOOL isNeedCorner;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSticky;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)getShouldSticky;
- (void)configSticky:;
- (id)diffIdentifier;
- (id)edgeForObject;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)isNeedCorner;
- (void)setIsNeedCorner:;
- (void)setShouldSticky:;
- (void)setStickyHeight:;
- (BOOL)shouldSticky;
- (double)stickyHeight;
- (id)init;
- (id)categoryList;
- (void)setCategoryList:;
- (void).cxx_destruct;
- (void)setHasSticky:;
- (BOOL)hasSticky;
@end
