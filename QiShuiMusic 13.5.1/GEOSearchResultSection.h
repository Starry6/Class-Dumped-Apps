@interface GEOSearchResultSection : NSObject
@property (nonatomic) q cellType;
@property (nonatomic) NSString headerDisplayName;
@property (nonatomic) NSString subHeaderDisplayName;
@property (nonatomic) GEOStyleAttributes styleAttributes;
- (id)init;
- (void)setCellType:;
- (long long)cellType;
- (void).cxx_destruct;
- (id)styleAttributes;
- (id)headerDisplayName;
- (void)setHeaderDisplayName:;
- (id)subHeaderDisplayName;
- (void)setSubHeaderDisplayName:;
- (id)initWithSearchResultSection:;
@end
