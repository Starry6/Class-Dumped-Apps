@interface AWEPostPageGameCPHandler : NSObject
@property (nonatomic) NSArray gameCPAddHashTagNameSignal;
@property (nonatomic) NSDictionary traceReeditParams;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (id)mediaTypeForTrack;
- (void)reportMultiAnchorSelectPanelShowTracker;
- (void)sendGameCPAddHashTagNameSignal:;
- (void)reportTrackerWithEvent:extra:;
- (id)gameCPHashTagsStringWithList:resolveHashTagNames:maxHashTagLimit:;
- (long long)anchorRequestPublishItemType;
- (id)gameCPAddHashTagNameSignal;
- (id)traceReeditParams;
- (void)setGameCPAddHashTagNameSignal:;
- (id)p_gameCPHashTagsStringWithHashTagList:countLimit:;
- (void)setTraceReeditParams:;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
