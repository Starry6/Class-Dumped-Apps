@interface WBSHistoryServiceObject : NSObject
@property (nonatomic) q databaseID;
- (long long)databaseID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithDatabaseID:;
+ (BOOL)supportsSecureCoding;
@end
