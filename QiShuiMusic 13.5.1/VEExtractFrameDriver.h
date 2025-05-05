@interface VEExtractFrameDriver : NSObject
@property (nonatomic) q strategy;
@property (nonatomic) NSArray disableFeatures;
@property (nonatomic) @? receiveFrame;
- (id)init:disableFeatures:;
- (id)receiveFrame;
- (void)setReceiveFrame:;
- (long long)strategy;
- (void).cxx_destruct;
- (id)disableFeatures;
@end
