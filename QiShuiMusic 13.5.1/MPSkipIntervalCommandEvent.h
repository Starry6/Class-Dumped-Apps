@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent
@property (nonatomic) double interval;
- (double)interval;
- (id)initWithCommand:mediaRemoteType:options:;
@end
