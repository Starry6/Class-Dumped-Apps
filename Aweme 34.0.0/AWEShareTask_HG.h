@interface AWEShareTask_HG : NSObject
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) NSString channel;
@property (nonatomic) @? completion;
@property (nonatomic) BDPShareResultModel model;
- (id)initWithUniqueID:channel:completion:;
- (void)finishWith:error:info:;
- (id)initWithUniqueID:channel:shareResultModel:completion:;
- (BOOL)finished;
- (void)setModel:;
- (id)completion;
- (id)channel;
- (id)uniqueID;
- (void)setCompletion:;
- (void)setChannel:;
- (void)setUniqueID:;
- (id)model;
- (void).cxx_destruct;
@end
