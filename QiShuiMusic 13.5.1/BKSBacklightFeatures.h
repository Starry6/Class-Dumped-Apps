@interface BKSBacklightFeatures : NSObject
@property (nonatomic) BOOL disableFeatures;
@property (nonatomic) float fixedBrightnessNitsWhileDisabled;
@property (nonatomic) float fixedBrightnessLevelWhileDisabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)didFinishProtobufDecodingWithError:;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (void)setFixedBrightnessNitsWhileDisabled:;
- (void)setFixedBrightnessLevelWhileDisabled:;
- (BOOL)disableFeatures;
- (void)setDisableFeatures:;
- (float)fixedBrightnessNitsWhileDisabled;
- (float)fixedBrightnessLevelWhileDisabled;
+ (id)protobufSchema;
@end
