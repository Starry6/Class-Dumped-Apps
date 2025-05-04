@interface AWELiveAudienceAccessBackgroundPlugin : NSObject
@property (nonatomic) AWELiveAudienceAccessContext context;
@property (nonatomic) IESLiveBackgroundView liveBackgroundView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveBackgroundView;
- (void)setLiveBackgroundView:;
- (void)showBackgroundView;
- (void)stageDidChangedFrom:to:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)createBackgroundView;
@end
