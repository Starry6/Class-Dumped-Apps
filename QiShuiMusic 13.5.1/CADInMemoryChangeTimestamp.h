@interface CADInMemoryChangeTimestamp : NSObject
- (id)initWithTimestamps:;
- (id)redactedDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)allDatabases;
- (void).cxx_destruct;
- (id)timestampForDatabase:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)timestampForNow;
@end
