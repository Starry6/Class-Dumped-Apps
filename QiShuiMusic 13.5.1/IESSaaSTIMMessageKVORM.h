@interface IESSaaSTIMMessageKVORM : IESSaaSTIMBaseORM
@property (nonatomic) NSString belongingMessageID;
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshWithMessageID:key:value:;
- (id)belongingMessageID;
- (void)setBelongingMessageID:;
- (id)key;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)belongingMessageID;
+ (id)objectRelationalMappingForWCDB;
+ (id)referMessageKeyWithServerMessageID:;
+ (id)key;
+ (id)value;
@end
