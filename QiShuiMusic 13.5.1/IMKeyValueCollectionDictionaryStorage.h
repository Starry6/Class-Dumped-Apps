@interface IMKeyValueCollectionDictionaryStorage : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionary;
- (id)init;
- (void)setObject:forKey:;
- (id)initWithDictionary:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)description;
- (void)removeObjectForKey:;
- (id)copyWithZone:;
@end
