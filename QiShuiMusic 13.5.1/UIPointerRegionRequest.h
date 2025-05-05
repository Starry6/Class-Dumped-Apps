@interface UIPointerRegionRequest : NSObject
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) q modifiers;
@property (nonatomic) q _requestingDriverType;
- (id)location;
- (void)setLocation:;
- (id)description;
- (BOOL)_isPencilInitiated;
- (long long)modifiers;
- (void)setModifiers:;
- (long long)_requestingDriverType;
- (void)set_requestingDriverType:;
@end
