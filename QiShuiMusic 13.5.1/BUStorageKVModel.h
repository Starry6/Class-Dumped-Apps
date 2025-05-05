@interface BUStorageKVModel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (void)setValue:;
- (id)type;
- (void).cxx_destruct;
- (id)value;
+ (id)_pbus_tableName;
+ (id)_pbus_primaryKey;
@end
