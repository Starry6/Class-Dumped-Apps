@interface AWEFeedCacheTagProcessorFactory : NSObject
@property (nonatomic) NSSet keySet;
@property (nonatomic) @? creator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTargetTags:creator:;
- (id)createWithTag:;
- (id)keySet;
- (void).cxx_destruct;
- (id)creator;
- (void)setCreator:;
- (void)setKeySet:;
@end
