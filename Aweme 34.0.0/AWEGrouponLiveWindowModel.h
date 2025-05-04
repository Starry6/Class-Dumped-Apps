@interface AWEGrouponLiveWindowModel : MTLModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString liveSchema;
@property (nonatomic) q stayWhenHalfClose;
@property (nonatomic) Q showScene;
@property (nonatomic) float windowTopPercent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowScene:;
- (id)liveSchema;
- (float)windowTopPercent;
- (long long)stayWhenHalfClose;
- (void)setLiveSchema:;
- (void)setStayWhenHalfClose:;
- (void)setWindowTopPercent:;
- (id)roomID;
- (unsigned long long)showScene;
- (void).cxx_destruct;
- (void)setRoomID:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)roomIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
