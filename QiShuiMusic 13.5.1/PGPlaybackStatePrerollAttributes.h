@interface PGPlaybackStatePrerollAttributes : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) q contentType;
@property (nonatomic) double requiredLinearPlaybackEndTime;
@property (nonatomic) UIColor preferredTintColor;
- (long long)contentType;
- (id)initWithDictionary:;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)preferredTintColor;
- (double)requiredLinearPlaybackEndTime;
- (id)initWithRequiredLinearPlaybackEndTime:preferredTintColor:contentType:;
- (id)preferredTintColorDescription;
+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:preferredTintColor:;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:preferredTintColor:;
@end
