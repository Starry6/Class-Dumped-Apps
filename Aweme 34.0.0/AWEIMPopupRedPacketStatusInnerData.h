@interface AWEIMPopupRedPacketStatusInnerData : MTLModel
@property (nonatomic) q redPacketStatus;
@property (nonatomic) BOOL hitFrequencyControl;
@property (nonatomic) AWEIMPopupRedPacketStatusWindowData windowData;
@property (nonatomic) BOOL isColdLaunchFreeRedPacket;
@property (nonatomic) AWEIMPopupRedPacketLottieModel coverLottieData;
@property (nonatomic) AWEIMPopupRedPacketLottieModel atmosphereLottieData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isColdLaunchFreeRedPacket;
- (void)setIsColdLaunchFreeRedPacket:;
- (long long)redPacketStatus;
- (void)setRedPacketStatus:;
- (BOOL)hitFrequencyControl;
- (void)setHitFrequencyControl:;
- (id)windowData;
- (void)setWindowData:;
- (id)coverLottieData;
- (void)setCoverLottieData:;
- (id)atmosphereLottieData;
- (void)setAtmosphereLottieData:;
- (void).cxx_destruct;
+ (id)windowDataJSONTransformer;
+ (id)coverLottieDataJSONTransformer;
+ (id)atmosphereLottieDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
