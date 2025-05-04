@interface AWETeenSettingSectionModel : NSObject
@property (nonatomic) NSString sectionHeaderTitle;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) NSArray itemArray;
@property (nonatomic) NSString sectionFooterTitle;
@property (nonatomic) BOOL hasClearOnce;
- (id)itemArray;
- (void)setItemArray:;
- (void)setSectionFooterTitle:;
- (id)sectionFooterTitle;
- (void)setHasClearOnce:;
- (BOOL)hasClearOnce;
- (double)sectionHeaderHeight;
- (id)init;
- (void).cxx_destruct;
- (void)setSectionHeaderHeight:;
- (id)sectionHeaderTitle;
- (void)setSectionHeaderTitle:;
@end
