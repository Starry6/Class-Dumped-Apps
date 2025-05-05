@interface LSPlugInQueryAllUnitsResult : _LSQueryResult
@property (nonatomic) NSArray pluginUnits;
@property (nonatomic) NSUUID dbUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPlugInUnits:forDatabaseWithUUID:;
- (id)pluginUnits;
- (id)dbUUID;
+ (BOOL)supportsSecureCoding;
@end
