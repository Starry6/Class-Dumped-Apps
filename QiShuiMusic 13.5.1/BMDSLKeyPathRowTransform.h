@interface BMDSLKeyPathRowTransform : BMDSLBaseCodable
@property (nonatomic) NSArray keyPaths;
@property (nonatomic) NSArray columnNames;
- (void)setKeyPaths:;
- (id)keyPaths;
- (id)initWithCoder:;
- (id)columnNames;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)rowFromInput:;
- (id)initWithKeyPaths:columnNames:name:version:;
- (id)initWithKeyPaths:columnNames:;
- (void)setColumnNames:;
+ (BOOL)supportsSecureCoding;
@end
