@interface BYDeviceForTest : BYDevice
@property (nonatomic) BOOL hasSolidStateHomeButton;
@property (nonatomic) BOOL supportsTrueTone;
- (id)init;
- (BOOL)hasSolidStateHomeButton;
- (BOOL)supportsTrueTone;
@end
