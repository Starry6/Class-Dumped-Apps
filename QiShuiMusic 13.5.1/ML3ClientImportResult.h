@interface ML3ClientImportResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSDictionary resultingDatabasePersistentIDs;
- (id)initWithCoder:;
- (BOOL)success;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSuccess:resultingDatabasePersistentIDs:;
- (id)resultingDatabasePersistentIDs;
+ (BOOL)supportsSecureCoding;
@end
