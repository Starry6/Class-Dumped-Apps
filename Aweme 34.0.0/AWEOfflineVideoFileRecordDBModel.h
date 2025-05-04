@interface AWEOfflineVideoFileRecordDBModel : NSObject
@property (nonatomic) q idx;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString uid;
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
- (id)initWithAwemeModel:;
- (void)setLastInsertedRowID:;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:;
- (void)setIdx:;
- (void)setUid:;
- (id)itemID;
- (void)setItemID:;
- (long long)lastInsertedRowID;
- (id)uid;
- (void).cxx_destruct;
- (long long)idx;
- (id)initWithItemID:;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)itemID;
+ (id)uid;
+ (id)idx;
@end
