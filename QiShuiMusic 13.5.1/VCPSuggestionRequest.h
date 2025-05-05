@interface VCPSuggestionRequest : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSMutableDictionary clusterFlagByClusterId;
@property (nonatomic) NSArray csns;
@property (nonatomic) NSArray cflags;
@property (nonatomic) @? updateHandler;
@property (nonatomic) VNCanceller canceller;
- (id)requestId;
- (id)updateHandler;
- (unsigned long long)type;
- (void)setUpdateHandler:;
- (void).cxx_destruct;
- (id)initWithFaceClusterIds:clusterFlags:updateHandler:;
- (id)clusterFlagByClusterId;
- (id)csns;
- (id)cflags;
- (id)canceller;
+ (id)requestWithFaceClusterIds:clusterFlags:updateHandler:;
@end
