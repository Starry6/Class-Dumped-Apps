@interface CNMultiDictionary : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (BOOL)containsKey:;
- (id)init;
- (id)objectsForKey:;
- (id)allKeys;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithEntries:;
- (id)description;
- (id)objectsForKeys:;
- (id)dictionaryRepresentation;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)eachObject:;
+ (id)multiDictionary;
+ (id)multiDictionaryWithObject:forKey:;
@end
