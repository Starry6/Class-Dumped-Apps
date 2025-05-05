@interface ASDMigrationRequestOptions : ASDRequestOptions
@property (nonatomic) Q migrationType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (unsigned long long)migrationType;
- (id)initWithMigrationType:;
+ (BOOL)supportsSecureCoding;
@end
