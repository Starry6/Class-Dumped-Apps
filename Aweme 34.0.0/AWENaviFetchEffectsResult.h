@interface AWENaviFetchEffectsResult : NSObject
@property (nonatomic) TTKNaviModel avatar;
@property (nonatomic) AWENaviEffectContextModel contextModel;
@property (nonatomic) NSArray others;
@property (nonatomic) NSDictionary effectNameToEffectMapping;
- (id)contextModel;
- (void)setContextModel:;
- (void)setEffectNameToEffectMapping:;
- (id)effectNameToEffectMapping;
- (void).cxx_destruct;
- (id)others;
- (id)avatar;
- (void)setAvatar:;
- (void)setOthers:;
@end
