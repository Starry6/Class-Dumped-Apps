@interface WBSParsecModel : NSObject
- (id)initWithDictionary:;
- (id)initWithJSONObject:;
- (id)_init;
+ (id)schema;
+ (id)optionalSchema;
@end
