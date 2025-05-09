@interface AWEIMLiveFansClubIconConfigNew : MTLModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) q level;
@property (nonatomic) NSString icon14URL;
@property (nonatomic) NSString icon16URL;
@property (nonatomic) NSArray iconList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconList;
- (void)setIconList:;
- (id)iconInfoWithScene:;
- (id)icon14URL;
- (id)icon16URL;
- (void)setIcon14URL:;
- (void)setIcon16URL:;
- (void)setLevel:;
- (id)initWithDictionary:error:;
- (long long)level;
- (void).cxx_destruct;
+ (id)iconList;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)propertyToModelClassInArrayMap;
+ (id)icon14URL;
+ (id)icon16URL;
+ (id)tableName;
+ (id)level;
+ (id)JSONKeyPathsByPropertyKey;
@end
