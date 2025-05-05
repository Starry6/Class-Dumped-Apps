@interface AnnieGlobalContext : NSObject
@property (nonatomic) NSMutableDictionary contextMap;
- (id)contextMap;
- (void)setContextMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)contextWithBid:;
+ (id)sharedInstance;
@end
