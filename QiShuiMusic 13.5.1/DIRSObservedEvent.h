@interface DIRSObservedEvent : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString type;
@property (nonatomic) double time;
@property (nonatomic) q index;
@property (nonatomic) NSNumber dbIndex;
@property (nonatomic) NSString logID;
@property (nonatomic) NSDictionary schemaObject;
@property (nonatomic) q schemaDataLength;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) @ dictionaryValue;
@property (nonatomic) q dataLength;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dbIndex;
- (long long)schemaDataLength;
- (id)schemaObject;
- (void)setDbIndex:;
- (void)setSchemaDataLength:;
- (void)setSchemaObject:;
- (void)setTime:;
- (long long)dataLength;
- (double)time;
- (id)key;
- (void)setType:;
- (id)dictionaryValue;
- (long long)index;
- (void)setKey:;
- (id)type;
- (id)properties;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
@end
