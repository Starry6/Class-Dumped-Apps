@interface AMapFutureTimeInfoElement : AMapSearchObject
@property (nonatomic) q duration;
@property (nonatomic) q pathindex;
@property (nonatomic) q restriction;
@property (nonatomic) NSArray tmcs;
- (long long)pathindex;
- (void)setPathindex:;
- (void)setTmcs:;
- (id)tmcs;
- (long long)restriction;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)setRestriction:;
- (long long)duration;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
