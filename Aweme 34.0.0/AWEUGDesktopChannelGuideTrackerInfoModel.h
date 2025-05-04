@interface AWEUGDesktopChannelGuideTrackerInfoModel : MTLModel
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString showFrom;
@property (nonatomic) NSString traceId;
@property (nonatomic) NSString extraString;
@property (nonatomic) NSString guideStyleType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setGuideStyleType:;
- (void)setExtraString:;
- (void)setTraceId:;
- (id)extraString;
- (id)guideStyleType;
- (id)showFrom;
- (void)setShowFrom:;
- (id)sceneName;
- (id)traceId;
- (void).cxx_destruct;
- (void)setSceneName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
