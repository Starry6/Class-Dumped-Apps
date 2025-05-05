@interface GPBMessageFieldsCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (id)shared;
@end
