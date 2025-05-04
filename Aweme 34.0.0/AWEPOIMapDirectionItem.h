@interface AWEPOIMapDirectionItem : NSObject
@property (nonatomic) NSMutableArray overlayList;
@property (nonatomic) NSMutableArray annotations;
@property (nonatomic) q type;
@property (nonatomic) NSArray overlays;
@property (nonatomic) NSString eta;
@property (nonatomic) double duration;
- (void)replaceOverlays:;
- (id)overlayList;
- (void)setOverlayList:;
- (void)setAnnotations:;
- (void)addOverlay:;
- (id)annotations;
- (id)init;
- (void)addAnnotations:;
- (void)setDuration:;
- (long long)type;
- (void)setType:;
- (id)overlays;
- (void).cxx_destruct;
- (double)duration;
- (id)eta;
- (void)setEta:;
@end
