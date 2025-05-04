@interface AWEFeedProgressTrackerService : NSObject
@property (nonatomic) AWEFeedProgressContext progressContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:withParams:;
- (void)trackErrorThumbnailWithModel:withParams:;
- (void)trackGetProgressThumbnailWithModel:error:duration:;
- (void)trackRequestThumbnailWithModel:;
- (void)trackShowThumbnailWithModel:;
- (id)getCommonTrackParamsWithModel:;
- (id)init;
- (void).cxx_destruct;
- (id)progressContext;
- (void)setProgressContext:;
@end
