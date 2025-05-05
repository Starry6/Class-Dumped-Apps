@interface EMInternalMessageID : NSObject
@property (nonatomic) q databaseID;
@property (nonatomic) NSString externalID;
- (long long)databaseID;
- (id)externalID;
- (void).cxx_destruct;
- (id)initWithDatabaseID:externalID:;
@end
