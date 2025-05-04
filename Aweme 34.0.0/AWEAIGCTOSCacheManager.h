@interface AWEAIGCTOSCacheManager : NSObject
@property (nonatomic) NSMutableDictionary tosDict;
- (id)retrieveTOSForPath:;
- (void)updateTOSForPath:tos:;
- (id)tosDict;
- (void)setTosDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
