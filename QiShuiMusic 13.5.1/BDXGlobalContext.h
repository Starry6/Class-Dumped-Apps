@interface BDXGlobalContext : NSObject
@property (nonatomic) NSMutableDictionary contextMap;
- (id)contextMap;
- (void)setContextMap:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerCopyObj:forKey:withBid:;
+ (void)registerWeakObj:forKey:withBid:;
+ (id)contextWithBid:;
+ (id)getContextWithBid:create:;
+ (id)getObjForKey:withBid:;
+ (id)getObjForType:withBid:;
+ (BOOL)isWeakObjForKey:withBid:;
+ (id)mergeContext:withBid:;
+ (void)registerCopyObj:forType:withBid:;
+ (void)registerStrongObj:forKey:withBid:;
+ (void)registerStrongObj:forType:withBid:;
+ (void)registerWeakObj:forType:withBid:;
+ (id)sharedInstance;
@end
