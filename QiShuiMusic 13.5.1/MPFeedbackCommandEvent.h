@interface MPFeedbackCommandEvent : MPRemoteCommandEvent
@property (nonatomic) BOOL negative;
- (BOOL)isNegative;
- (id)initWithCommand:mediaRemoteType:options:;
@end
