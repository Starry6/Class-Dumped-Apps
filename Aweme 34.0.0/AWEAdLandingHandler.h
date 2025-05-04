@interface AWEAdLandingHandler : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generalSearchCommonParamsForTrack;
- (BOOL)handleIronManURLLandingEvent:;
- (id)composeIronManURLWithLandingEvent:;
- (id)configRequestParamsWithModel:;
- (id)ironManURLWithURL:;
@end
