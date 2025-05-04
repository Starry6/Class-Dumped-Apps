@interface AWEIMConversationKVCacheModel : NSObject
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)value;
- (void)setKey:;
- (id)key;
- (void)setValue:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)value;
+ (id)key;
+ (id)conversationId;
@end
