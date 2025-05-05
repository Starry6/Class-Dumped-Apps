@interface TLKKeyValueTuple : TLKObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)key;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
+ (id)tupleWithKey:value:;
+ (id)tuplesForDictionary:;
+ (id)tuplesForKeys:values:;
@end
