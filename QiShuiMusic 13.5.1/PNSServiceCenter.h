@interface PNSServiceCenter : NSObject
@property (nonatomic) NSMutableDictionary instanceProtocolMap;
@property (nonatomic) NSMutableDictionary classProtocolMap;
- (void)_loadCompileServiceIfNeeded;
- (void)_parseCompileServicePair:;
- (void)bindClass:toProtocol:;
- (void)bindInstance:toProtocol:;
- (id)classProtocolMap;
- (Class)getClass:;
- (id)getInstance:;
- (id)instanceProtocolMap;
- (Class)safeGetClassForKey:;
- (id)safeGetInstanceForKey:;
- (void)safeSetClass:forKey:;
- (void)safeSetInstance:forKey:;
- (void)setClassProtocolMap:;
- (void)setInstanceProtocolMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
