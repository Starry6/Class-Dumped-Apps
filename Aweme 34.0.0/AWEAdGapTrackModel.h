@interface AWEAdGapTrackModel : MTLModel
@property (nonatomic) NSString groupID;
@property (nonatomic) Q interactiveMask;
@property (nonatomic) Q lastAd;
@property (nonatomic) double duration;
@property (nonatomic) Q gapNumber;
@property (nonatomic) Q trackCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)interactiveMask;
- (void)setInteractiveMask:;
- (unsigned long long)lastAd;
- (void)setGapNumber:;
- (unsigned long long)gapNumber;
- (void)setLastAd:;
- (void)setGroupID:;
- (unsigned long long)trackCount;
- (void)refresh;
- (id)groupID;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (void)setTrackCount:;
+ (id)lastAdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
