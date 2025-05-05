@interface BUStorageField : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q type;
@property (nonatomic) BOOL primary;
@property (nonatomic) BOOL notNull;
@property (nonatomic) NSString typeDescription;
- (id)_convertType;
- (id)convertToSqlString;
- (id)defaultSqlString;
- (BOOL)hasDefault;
- (BOOL)primary;
- (void)setPrimary:;
- (void)setName:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)notNull;
- (void)setNotNull:;
- (id)typeDescription;
- (id)name;
+ (id)convertToSqlStringWithFields:;
@end
