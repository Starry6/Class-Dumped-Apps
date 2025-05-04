@interface AWEGDContainerTrackerProvider : NSObject
@property (nonatomic) AWEGoodsDetailPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:btmInfo:;
- (void)appendTrackParams:;
- (void)appendTrackResourceFromParams;
- (void)trackAdEvent:params:;
- (void)trackException:params:error:;
- (id)getBaseTrackParams;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
