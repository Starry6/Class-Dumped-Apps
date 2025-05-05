@interface CJPayOCRBPEAData : NSObject
@property (nonatomic) NSString requestAccessPolicy;
@property (nonatomic) NSString jumpSettingPolicy;
@property (nonatomic) NSString startRunningPolicy;
@property (nonatomic) NSString stopRunningPolicy;
@property (nonatomic) @ bridgeCommand;
- (id)bridgeCommand;
- (id)jumpSettingPolicy;
- (id)requestAccessPolicy;
- (void)setBridgeCommand:;
- (void)setJumpSettingPolicy:;
- (void)setRequestAccessPolicy:;
- (void)setStartRunningPolicy:;
- (void)setStopRunningPolicy:;
- (id)startRunningPolicy;
- (id)stopRunningPolicy;
- (void).cxx_destruct;
@end
