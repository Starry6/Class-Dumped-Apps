@interface KVItem : NSObject
@property (nonatomic) NSData buffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buffer;
- (unsigned long long)hash;
- (long long)itemType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)itemId;
- (BOOL)isEqualToItem:;
- (void)enumerateFieldsUsingBlock:;
- (id)initWithBuffer:verify:copy:error:;
- (void)enumerateFieldsWithLocaleType:usingBlock:;
- (id)JSONWithIndent:;
- (id)initFromDictionary:error:;
- (id)fieldsWithType:;
- (unsigned long long)fieldCount;
- (BOOL)hasFieldWithType:label:value:;
+ (id)itemFromBuffer:error:;
@end
