@interface BKSTouchStream : NSObject
@property (nonatomic) I reference;
- (unsigned int)reference;
- (void)setReference:;
- (void)setEventDispatchMode:ambiguityRecommendation:lastTouchTimestamp:;
- (void)setEventDispatchMode:lastTouchTimestamp:;
- (id)initWithContextID:displayUUID:identifier:policy:;
- (void)invalidate;
@end
