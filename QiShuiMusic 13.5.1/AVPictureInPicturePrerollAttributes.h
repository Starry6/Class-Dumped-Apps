@interface AVPictureInPicturePrerollAttributes : NSObject
@property (nonatomic) PGPlaybackStatePrerollAttributes pegasusAttributes;
@property (nonatomic) {?=qiIq} requiredLinearPlaybackEndTime;
@property (nonatomic) UIColor preferredTintColor;
- (void).cxx_destruct;
- (id)preferredTintColor;
- (id)initWithPlaybackStatePrerollAttributes:requiredLinearPlaybackEndTime:;
- (id)requiredLinearPlaybackEndTime;
- (id)pegasusAttributes;
+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:preferredTintColor:;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:preferredTintColor:;
@end
