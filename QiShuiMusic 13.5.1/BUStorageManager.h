@interface BUStorageManager : NSObject
@property (nonatomic) NSMutableDictionary dbMap;
@property (nonatomic) NSMutableDictionary kvMap;
@property (nonatomic) NSMutableDictionary dbClassMap;
@property (nonatomic) NSMutableDictionary kvClassMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dbClassMap;
- (id)dbMap;
- (id)dbWithName:option:;
- (id)kvClassMap;
- (id)kvMap;
- (id)kvWithName:option:;
- (void)registDB:name:;
- (void)registKV:name:;
- (void)setDbClassMap:;
- (void)setDbMap:;
- (void)setKvClassMap:;
- (void)setKvMap:;
- (void)setup;
- (void).cxx_destruct;
+ (id)shared;
@end
