@interface NSURLKeyValuePair : NSObject
- (void)dealloc;
- (id)key;
- (unsigned long long)hash;
- (void)setKey:;
- (void)setValue:;
- (id)description;
- (id)value;
- (id)initWithKey:value:;
- (BOOL)isEqual:;
+ (id)pair;
+ (id)pairWithKey:value:;
@end
