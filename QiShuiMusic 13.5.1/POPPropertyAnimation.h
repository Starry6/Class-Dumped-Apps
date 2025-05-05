@interface POPPropertyAnimation : POPAnimation
@property (nonatomic) POPAnimatableProperty property;
@property (nonatomic) @ fromValue;
@property (nonatomic) @ toValue;
@property (nonatomic) double roundingFactor;
@property (nonatomic) Q clampMode;
@property (nonatomic) BOOL additive;
- (id)progressMarkers;
- (void)_appendDescription:debug:;
- (void)_initState;
- (unsigned long long)clampMode;
- (double)roundingFactor;
- (void)setClampMode:;
- (void)setProgressMarkers:;
- (void)setRoundingFactor:;
- (void)setProperty:;
- (id)property;
- (id)currentValue;
- (void)setAdditive:;
- (BOOL)isAdditive;
- (id)copyWithZone:;
- (id)fromValue;
- (void)setFromValue:;
- (id)toValue;
- (void)setToValue:;
+ (id)animationWithCustomPropertyNamed:readBlock:writeBlock:;
+ (id)animationWithCustomPropertyReadBlock:writeBlock:;
@end
