@interface MSVDefaultDictionary : NSMutableDictionary
@property (nonatomic) @? defaultValue;
- (id)init;
- (void)setObject:forKey:;
- (void)setDefaultValue:;
- (id)defaultValue;
- (id)initWithObjects:forKeys:count:;
- (id)keyEnumerator;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)copyWithZone:;
- (id)initWithDefaultValue:;
- (id)initWithCapacity:defaultValue:;
- (id)initWithDictionary:defaultValue:;
+ (id)dictionaryWithDefaultValue:;
+ (id)dictionaryWithCapacity:defaultValue:;
+ (id)dictionaryWithDictionary:defaultValue:;
@end
