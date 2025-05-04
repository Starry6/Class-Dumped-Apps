@interface AWESearchImageMonitor : NSObject
@property (nonatomic) BOOL isListening;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveMonitor:attributes:extra0:extra1:;
- (BOOL)enableImageMonitor;
- (unsigned long long)largeImageTypeWith:viewSize:fileSize:;
- (id)convertAttribute:;
- (void)beginListen;
- (void)endListen;
- (BOOL)isListening;
- (void)setIsListening:;
- (id)init;
- (void)setLock:;
- (id)lock;
+ (id)shareInstance;
@end
