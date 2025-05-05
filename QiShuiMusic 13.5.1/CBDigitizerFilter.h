@interface CBDigitizerFilter : CBFilter
@property (nonatomic) BOOL obstructed;
@property (nonatomic) NSInteger orientation;
- (id)handleALSEvent:;
- (void)initDigitizerProperties;
- (void)dealloc;
- (BOOL)isObstructed;
- (void)setObstructed:;
- (id)newHotspotForOrientation:;
- (void)loadTouchProperties:;
- (int)orientation;
- (id)initWithOrientation:;
- (BOOL)setProperty:forKey:;
- (id)filterEvent:;
- (void)overrideHotspotWithCenterX:andCenterY:;
- (id)handleDigitizerEvent:;
- (void)setTriggered:forHotspot:;
- (void)setOrientation:;
@end
