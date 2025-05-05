@interface MPRatingCommand : MPRemoteCommand
@property (nonatomic) float minimumRating;
@property (nonatomic) float maximumRating;
- (float)maximumRating;
- (id)_mediaRemoteCommandInfoOptions;
- (float)minimumRating;
- (void)setMaximumRating:;
- (void)setMinimumRating:;
- (id)newCommandEventWithRating:;
@end
