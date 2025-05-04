@interface AWEFilterDetailManager : NSObject
@property (nonatomic) NSMutableDictionary filterDetailDict;
- (id)filterDetailDict;
- (void)setFilterDetailDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
