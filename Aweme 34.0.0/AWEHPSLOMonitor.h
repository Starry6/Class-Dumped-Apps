@interface AWEHPSLOMonitor : NSObject
@property (nonatomic) q sendCount;
@property (nonatomic) NSMutableDictionary timestampMap;
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (void)sendWithModel:;
- (void)addTimestampForKey:;
- (void)appendExtra:;
- (id)timestampMap;
- (void)setTimestampMap:;
- (void)p_sendWithModel:;
- (void)p_sendEvent:status:params:;
- (void)p_setTimestamp:forKey:;
- (id)p_timestampForKey:;
- (void)addTimestamp:forKey:;
- (void)setEvent:;
- (id)extra;
- (id)initWithEvent:;
- (void).cxx_destruct;
- (id)event;
- (id)timestampForKey:;
- (long long)sendCount;
- (void)setSendCount:;
+ (id)monitorWithEvent:;
@end
