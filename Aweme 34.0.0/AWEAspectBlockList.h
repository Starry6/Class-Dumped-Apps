@interface AWEAspectBlockList : NSObject
@property (nonatomic) NSDictionary blocklistDictionary;
- (void)setBlocklistDictionary:;
- (id)blocklistDictionary;
- (BOOL)isMethodHookBlocked:withClass:withSelector:;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:;
@end
