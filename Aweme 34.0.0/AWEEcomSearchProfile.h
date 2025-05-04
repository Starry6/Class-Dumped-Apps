@interface AWEEcomSearchProfile : NSObject
@property (nonatomic) NSMutableDictionary tags;
- (void)setTag:value:;
- (void)markTag:mode:;
- (id)timeProfile:;
- (id)tags;
- (id)init;
- (void)setTags:;
- (void).cxx_destruct;
+ (id)profile;
@end
