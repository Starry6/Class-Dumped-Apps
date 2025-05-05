@interface IESSaaSTIMClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> mappingQueue;
@property (nonatomic) <IESSaaSTIMClientProtocol> imp;
- (void)enqueue:withClientImp:;
- (id)mappingQueue;
- (void)setMappingQueue:;
- (id)init;
- (void)enqueue:;
- (void).cxx_destruct;
- (id)imp;
- (void)setImp:;
+ (id)nameForRequestMethod:;
+ (id)sharedInstance;
@end
