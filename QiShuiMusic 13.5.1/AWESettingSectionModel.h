@interface AWESettingSectionModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString sectionHeaderTitle;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) NSArray itemArray;
@property (nonatomic) NSString sectionFooterTitle;
@property (nonatomic) BOOL hasClearOnce;
- (BOOL)hasClearOnce;
- (id)itemArray;
- (id)sectionFooterTitle;
- (void)setHasClearOnce:;
- (void)setItemArray:;
- (void)setSectionFooterTitle:;
- (double)sectionHeaderHeight;
- (id)init;
- (void)setType:;
- (void)setSectionHeaderHeight:;
- (long long)type;
- (void).cxx_destruct;
- (void)setSectionHeaderTitle:;
- (id)sectionHeaderTitle;
@end
