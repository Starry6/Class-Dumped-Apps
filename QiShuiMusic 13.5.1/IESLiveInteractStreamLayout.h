@interface IESLiveInteractStreamLayout : NSObject
@property (nonatomic) q canvasWidth;
@property (nonatomic) q canvasHeight;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSArray regions;
@property (nonatomic) NSString appData;
@property (nonatomic) NSArray secondRegions;
@property (nonatomic) NSDictionary secondSEI;
@property (nonatomic) NSData seiInfo;
@property (nonatomic) NSArray mixAfterRegions;
@property (nonatomic) NSString publicStreamId;
@property (nonatomic) BOOL enableSpatialRender;
@property (nonatomic) IESLiveInteractSpatialAudioPosition position;
@property (nonatomic) IESLiveInteractSpatialAudioHumanOrientation humanOrientation;
@property (nonatomic) BOOL isPreMixEnabled;
- (BOOL)isPreMixEnabled;
- (id)mixAfterRegions;
- (void)setCanvasWidth:;
- (id)seiInfo;
- (long long)canvasHeight;
- (BOOL)enableSpatialRender;
- (id)humanOrientation;
- (id)publicStreamId;
- (id)secondRegions;
- (id)secondSEI;
- (void)setCanvasHeight:;
- (void)setEnableSpatialRender:;
- (void)setHumanOrientation:;
- (void)setIsPreMixEnabled:;
- (void)setMixAfterRegions:;
- (void)setPublicStreamId:;
- (void)setSecondRegions:;
- (void)setSecondSEI:;
- (void)setSeiInfo:;
- (void)setPosition:;
- (id)position;
- (void)setBackgroundColor:;
- (id)regions;
- (id)backgroundColor;
- (void)setRegions:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setAppData:;
- (id)appData;
- (long long)canvasWidth;
@end
