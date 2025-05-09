@interface BDLGurdSyncResourcesTask : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSArray channelsArray;
@property (nonatomic) NSString businessDomain;
@property (nonatomic) @? completion;
@property (nonatomic) BOOL executing;
@property (nonatomic) NSString resourceVersion;
@property (nonatomic) Q options;
- (id)businessDomain;
- (id)channelsArray;
- (BOOL)forceRequest;
- (void)setBusinessDomain:;
- (void)setChannelsArray:;
- (id)completion;
- (void)setOptions:;
- (void)setCompletion:;
- (id)resourceVersion;
- (id)identifier;
- (BOOL)isExecuting;
- (unsigned long long)options;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (void)setExecuting:;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setResourceVersion:;
+ (id)taskWithAccessKey:channels:businessDomain:completion:;
+ (id)taskWithChannels:businessDomain:completion:;
@end
