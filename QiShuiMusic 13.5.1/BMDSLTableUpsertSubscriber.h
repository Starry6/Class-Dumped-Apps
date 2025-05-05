@interface BMDSLTableUpsertSubscriber : BMDSLSubscriber
@property (nonatomic) NSString tableName;
- (id)tableName;
- (id)identifier;
- (void)setTableName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithTableName:identifier:name:version:;
- (id)initWithTableName:identifier:;
- (id)bpsSubscriber;
+ (BOOL)supportsSecureCoding;
@end
