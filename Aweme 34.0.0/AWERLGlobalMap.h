@interface AWERLGlobalMap : NSObject
@property (nonatomic) NSMutableDictionary map;
- (id)map;
- (void)setMap:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)setObject:forKey:;
+ (id)shareInstance;
@end
