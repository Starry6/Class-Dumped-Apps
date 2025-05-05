@interface ARCoachingState : NSObject
@property (nonatomic) ARCoachingOverlayView view;
@property (nonatomic) q requirements;
@property (nonatomic) BOOL isViewActiveForState;
- (id)initWithView:;
- (void)exit;
- (id)view;
- (long long)requirements;
- (void)enter;
- (void).cxx_destruct;
- (void)setView:;
- (BOOL)isViewActiveForState;
- (id)doAction:;
@end
