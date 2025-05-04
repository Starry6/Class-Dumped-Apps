@interface AWENearbySwitchButtonGuideRule : AWEBaseApiModel
@property (nonatomic) NSString guideText;
@property (nonatomic) q slideVideoCnt;
@property (nonatomic) AWENearbyGuideFrequency frequency;
@property (nonatomic) q maxGuideTimes;
@property (nonatomic) NSString fullBtnName;
@property (nonatomic) NSString dualBtnName;
@property (nonatomic) NSString confirmText;
- (id)guideText;
- (void)setGuideText:;
- (long long)maxGuideTimes;
- (id)fullBtnName;
- (id)dualBtnName;
- (long long)slideVideoCnt;
- (void)setMaxGuideTimes:;
- (void)setSlideVideoCnt:;
- (void)setFullBtnName:;
- (void)setDualBtnName:;
- (void)setFrequency:;
- (void).cxx_destruct;
- (id)frequency;
- (void)setConfirmText:;
- (id)confirmText;
+ (BOOL)automaticallyDefaultMapping;
@end
