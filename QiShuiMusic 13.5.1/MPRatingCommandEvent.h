@interface MPRatingCommandEvent : MPRemoteCommandEvent
@property (nonatomic) float rating;
- (float)rating;
- (id)initWithCommand:mediaRemoteType:options:;
@end
