@interface GEOCategorySearchResultSection : NSObject
@property (nonatomic) q cellType;
@property (nonatomic) NSString headerDisplayName;
@property (nonatomic) NSString subHeaderDisplayName;
@property (nonatomic) GEOStyleAttributes styleAttributes;
- (id)init;
- (void)setCellType:;
- (long long)cellType;
- (void).cxx_destruct;
- (id)styleAttributes;
- (id)initWithCategorySearchResultSection:;
- (id)headerDisplayName;
- (void)setHeaderDisplayName:;
- (id)subHeaderDisplayName;
- (void)setSubHeaderDisplayName:;
@end
