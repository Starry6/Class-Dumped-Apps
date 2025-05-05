@interface BMPruner : NSObject
@property (nonatomic) BMStoreStream storeStream;
@property (nonatomic) BMStoreConfig storeConfig;
- (id)storeStream;
- (id)init;
- (id)storeConfig;
- (void).cxx_destruct;
- (id)initWithStoreStream:;
- (id)initWithStoreStream:config:;
- (void)deleteEventsPassingTest:;
- (void)pruneStream;
+ (id)new;
@end
