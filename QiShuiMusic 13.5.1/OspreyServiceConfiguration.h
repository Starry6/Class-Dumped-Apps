@interface OspreyServiceConfiguration : NSObject
@property (nonatomic) OspreyConnectionPool connectionPool;
- (id)init;
- (void).cxx_destruct;
- (id)connectionPool;
+ (id)sharedConfiguration;
@end
