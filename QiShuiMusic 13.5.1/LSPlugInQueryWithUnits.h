@interface LSPlugInQueryWithUnits : LSPlugInQuery
- (void)_enumerateWithXPCConnection:block:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPlugInUnits:forDatabaseWithUUID:;
+ (BOOL)supportsSecureCoding;
@end
