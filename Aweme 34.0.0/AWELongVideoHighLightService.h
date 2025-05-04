@interface AWELongVideoHighLightService : HTSService
@property (nonatomic) NSMutableDictionary hightLightToFeatureFilmMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldReplaceHighLightId:;
- (void)addHighLightId:awemeId:token:extraParams:;
- (id)getAwemeIdFromHighLightId:;
- (id)getTokenFromHighLightId:;
- (id)getCreateTimeFromHighLightId:;
- (void)replaceAwemeIdIfNeededWithHighLightId:targetParams:awemeIdKey:;
- (id)hightLightToFeatureFilmMap;
- (id)getHighlightType:;
- (void)setHightLightToFeatureFilmMap:;
- (void).cxx_destruct;
+ (BOOL)enableLongVideoHighLightReplace;
+ (BOOL)enableLongVideoHighLightVideoPlayFinishTrack;
+ (BOOL)enableHighLightTrackParams:;
+ (id)getRequestParamsForHighlight:;
@end
