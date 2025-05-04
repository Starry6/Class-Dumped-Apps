@interface AWEPzJournalTagsRow : NSObject
@property (nonatomic) NSInteger identifier;
@property (nonatomic) NSString tag;
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
- (id)initWithIdentifier:tag:;
- (id)tag;
- (void)setIdentifier:;
- (void)setTag:;
- (int)identifier;
- (id)description;
- (void).cxx_destruct;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)tag;
+ (id)identifier;
@end
