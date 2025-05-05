@interface IESLiveInteractiveRTCInfoParams : NSObject
@property (nonatomic) NSString linkerID;
@property (nonatomic) NSString linkmicID;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) Q mixType;
- (unsigned long long)mixType;
- (id)linkerID;
- (id)linkmicID;
- (id)rtcExtInfo;
- (void)setLinkerID:;
- (void)setLinkmicID:;
- (void)setMixType:;
- (void)setRtcExtInfo:;
- (id)init;
- (void).cxx_destruct;
@end
