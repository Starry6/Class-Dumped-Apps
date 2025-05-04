@interface AWEHPFamiliarTabJumpModel : NSObject
@property (nonatomic) AWEHPTabJumpModelContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldLoadTabJumpGuide;
- (id)handleJumpInfoModelIfNeedWithModel:;
- (id)landingUrlWithModel:withUrlString:withComponent:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
