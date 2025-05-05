@interface FPLocalizableStringLookup : NSObject
@property (nonatomic) NSBundle bundle;
@property (nonatomic) @ cfBundle;
@property (nonatomic) NSString tableName;
@property (nonatomic) NSArray tableNames;
- (id)localizedStringForKey:;
- (id)tableName;
- (void)setTableName:;
- (id)cfBundle;
- (id)bundle;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)tableNames;
- (void)setCfBundle:;
- (void)setTableNames:;
@end
