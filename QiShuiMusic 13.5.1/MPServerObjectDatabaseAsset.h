@interface MPServerObjectDatabaseAsset : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString hashedPersonID;
@property (nonatomic) q flavor;
@property (nonatomic) NSURL url;
@property (nonatomic) NSData miniSINF;
@property (nonatomic) NSArray sinfs;
- (id)url;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (long long)flavor;
- (id)initWithIdentifier:hashedPersonID:flavor:url:miniSINF:;
- (id)initWithIdentifier:hashedPersonID:flavor:url:sinfs:;
- (id)_initWithIdentifier:hashedPersonID:flavor:url:miniSINF:sinfs:;
- (id)initWithSQLRowResult:;
- (id)hashedPersonID;
- (id)miniSINF;
- (id)sinfs;
@end
