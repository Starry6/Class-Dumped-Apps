@interface AWEFeedCacheDataProvider : NSObject
@property (nonatomic) AWEFeedCacheDataDepository dataDepository;
@property (nonatomic) NSString name;
- (id)dataDepository;
- (void)setDataDepository:;
- (id)initWithName:dataDepository:;
- (void)loadCache:completion:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end
