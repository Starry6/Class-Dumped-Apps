@interface AFAudioPowerXPCProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)getAveragePower:andPeakPower:;
- (void)didEndAccessPower;
- (void)willBeginAccessPower;
- (void).cxx_destruct;
- (id)initWithXPCWrapper:;
@end
