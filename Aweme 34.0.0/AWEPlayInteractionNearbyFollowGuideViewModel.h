@interface AWEPlayInteractionNearbyFollowGuideViewModel : NSObject
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) NSString followText;
- (void)trackShowEvent;
- (id)followText;
- (void)followVideoAuthorWithCompletion:;
- (void)trackFollowEvent;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
