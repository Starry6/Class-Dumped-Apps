@interface AFTriggerlessListeningOptions : NSObject
@property (nonatomic) BOOL showUIDuringListening;
@property (nonatomic) BOOL playAlertBeforeListening;
@property (nonatomic) BOOL showUIBeforeListening;
@property (nonatomic) BOOL beepBeforeListening;
@property (nonatomic) double delay;
@property (nonatomic) double endpointDelay;
- (double)delay;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)_initWithShowUIDuringListening:playAlertBeforeListening:;
- (BOOL)showUIBeforeListening;
- (BOOL)beepBeforeListening;
- (BOOL)showUIDuringListening;
- (void)setShowUIDuringListening:;
- (BOOL)playAlertBeforeListening;
- (void)setPlayAlertBeforeListening:;
- (double)endpointDelay;
+ (BOOL)supportsSecureCoding;
@end
