@interface AWEShowPaidAuthModel : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q source;
@property (nonatomic) NSString containerID;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) BOOL processed;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)trackParams;
- (void)setTrackParams:;
- (BOOL)isProcessed;
- (void)setModel:;
- (id)init;
- (void)setContainerID:;
- (id)model;
- (id)containerID;
- (void).cxx_destruct;
- (unsigned long long)source;
- (void)setSource:;
- (void)setProcessed:;
@end
