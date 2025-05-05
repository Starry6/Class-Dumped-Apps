@interface AWEIMGroupMessageInactiveThresholdConf : IESIMBaseApiModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) NSString belongCid;
@property (nonatomic) q seconds;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)belongCid;
- (void)setBelongCid:;
- (long long)seconds;
- (void)setTitle:;
- (id)title;
- (void)setSeconds:;
- (void).cxx_destruct;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)belongCid;
+ (id)objectRelationalMappingForWCDB;
+ (id)tableName;
+ (id)seconds;
+ (id)title;
+ (id)JSONKeyPathsByPropertyKey;
@end
