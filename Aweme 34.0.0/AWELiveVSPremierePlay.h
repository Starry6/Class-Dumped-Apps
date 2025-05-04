@interface AWELiveVSPremierePlay : AWEBaseApiModel
@property (nonatomic) NSArray highlights;
@property (nonatomic) q playType;
@property (nonatomic) NSNumber premiereStartTime;
- (void)setPlayType:;
- (id)premiereStartTime;
- (void)setPremiereStartTime:;
- (void).cxx_destruct;
- (id)highlights;
- (void)setHighlights:;
- (long long)playType;
+ (id)JSONKeyPathsByPropertyKey;
@end
