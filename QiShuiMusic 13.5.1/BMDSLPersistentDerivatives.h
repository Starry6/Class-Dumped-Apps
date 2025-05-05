@interface BMDSLPersistentDerivatives : BMDSL
@property (nonatomic) NSURL url;
@property (nonatomic) NSString tableName;
@property (nonatomic) BMDSL upstream;
- (id)upstreams;
- (id)upstream;
- (id)url;
- (id)init;
- (id)bpsPublisher;
- (id)tableName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithUpstream:databaseURL:derivedTableName:name:version:;
- (id)initWithUpstream:databaseURL:derivedTableName:;
+ (BOOL)supportsSecureCoding;
@end
