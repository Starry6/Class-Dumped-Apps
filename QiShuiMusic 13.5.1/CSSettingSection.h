@interface CSSettingSection : NSObject
@property (nonatomic) NSString header;
@property (nonatomic) NSArray items;
@property (nonatomic) BOOL allowsReordering;
@property (nonatomic) @? orderChangedBlock;
- (id)header;
- (void)setHeader:;
- (id)items;
- (void)setItems:;
- (BOOL)allowsReordering;
- (void)setAllowsReordering:;
- (id)orderChangedBlock;
- (void)setOrderChangedBlock:;
- (void).cxx_destruct;
+ (id)sectionWithHeader:items:;
+ (id)sectionWithHeader:items:allowsReordering:orderChangedBlock:;
@end
