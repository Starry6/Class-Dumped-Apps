@interface AWENearbyGeneralGuideFreqModel : MTLModel
@property (nonatomic) NSString freqKey;
@property (nonatomic) q freqTimeY;
@property (nonatomic) q freqCountX;
@property (nonatomic) Q freqOption;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)freqCountX;
- (long long)freqTimeY;
- (id)freqKey;
- (unsigned long long)freqOption;
- (void)setFreqKey:;
- (void)setFreqTimeY:;
- (void)setFreqCountX:;
- (void)setFreqOption:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
