@interface DIRSCompressionGzipPlugin : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dataCompressionUsingGzip:level:windowSize:memoryLevel:strategy:error:;
- (id)encodedData:options:error:;
- (id)requiredHTTPHeaderFields;
- (id)algorithm;
+ (id)moduleId;
+ (id)sharedInstance;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
