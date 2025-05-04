@interface AWEFeedCacheClearRedundantCacheProcessor : NSObject
@property (nonatomic) AWEFeedCacheDataDepository dataDepository;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataDepository;
- (id)onProcess:context:;
- (id)initWithDataDepository:;
- (void)setDataDepository:;
- (void).cxx_destruct;
@end
