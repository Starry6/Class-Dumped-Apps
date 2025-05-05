@interface GEOResultRefinementGroup : NSObject
@property (nonatomic) GEOResultRefinementBar resultRefinementBar;
@property (nonatomic) GEOResultRefinementView resultRefinementView;
@property (nonatomic) GEOPDRefinementSessionState refinementSessionState;
- (void).cxx_destruct;
- (id)refinementSessionState;
- (void)setRefinementSessionState:;
- (id)initWithResultRefinementBar:resultRefinementView:refinementSessionState:;
- (id)initWithResultRefinementGroup:;
- (id)resultRefinementBar;
- (void)setResultRefinementBar:;
- (id)resultRefinementView;
- (void)setResultRefinementView:;
@end
