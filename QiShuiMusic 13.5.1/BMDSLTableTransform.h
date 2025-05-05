@interface BMDSLTableTransform : BMDSLBaseCodable
@property (nonatomic) <BMDSLRowTransform> rowTransform;
@property (nonatomic) BMTableSchema schema;
@property (nonatomic) NSString tableName;
- (id)schema;
- (id)tableName;
- (id)initWithCoder:;
- (void)setSchema:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithRowTransform:schema:tableName:name:version:;
- (id)initWithRowTransform:schema:tableName:;
- (id)rowTransform;
- (void)setRowTransform:;
+ (BOOL)supportsSecureCoding;
@end
