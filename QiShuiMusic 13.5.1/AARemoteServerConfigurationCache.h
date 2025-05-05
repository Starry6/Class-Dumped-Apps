@interface AARemoteServerConfigurationCache : NSObject
@property (nonatomic) NSDate creationDate;
@property (nonatomic) AAURLConfiguration configuration;
@property (nonatomic) NSHTTPURLResponse response;
- (id)init;
- (id)configuration;
- (id)response;
- (void).cxx_destruct;
- (id)initWithConfiguration:response:;
- (id)creationDate;
+ (id)cacheWithConfiguration:response:;
@end
