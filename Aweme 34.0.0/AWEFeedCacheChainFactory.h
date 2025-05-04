@interface AWEFeedCacheChainFactory : NSObject
@property (nonatomic) NSMutableArray processorFactories;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)processorFactories;
- (id)initWithFactories:;
- (id)createWithTag:;
- (void)setProcessorFactories:;
- (void).cxx_destruct;
@end
