@interface PIAMessageCenter : NSObject
@property (nonatomic) NSMutableDictionary dicMessage;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
- (id)dicMessage;
- (id)getMessage:;
- (void)setDicMessage:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)defaultCenter;
@end
