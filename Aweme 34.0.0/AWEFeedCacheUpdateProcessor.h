@interface AWEFeedCacheUpdateProcessor : NSObject
@property (nonatomic) @? UpdateCondition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)onProcess:context:;
- (id)initWithUpdateCondition:;
- (id)UpdateCondition;
- (void)setUpdateCondition:;
- (void).cxx_destruct;
@end
