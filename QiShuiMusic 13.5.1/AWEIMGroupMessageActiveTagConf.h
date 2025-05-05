@interface AWEIMGroupMessageActiveTagConf : IESIMBaseApiModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) NSString belongCid;
@property (nonatomic) q activeDays;
@property (nonatomic) NSString activeTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activeTag;
- (id)belongCid;
- (void)setActiveDays:;
- (void)setActiveTag:;
- (void)setBelongCid:;
- (void).cxx_destruct;
- (long long)activeDays;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)activeTag;
+ (id)belongCid;
+ (id)objectRelationalMappingForWCDB;
+ (id)tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)activeDays;
@end
