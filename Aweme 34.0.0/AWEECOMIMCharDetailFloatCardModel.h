@interface AWEECOMIMCharDetailFloatCardModel : MTLModel
@property (nonatomic) NSDictionary ext;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString renderType;
@property (nonatomic) NSString scene;
@property (nonatomic) @? trackerCommonParams;
@property (nonatomic) NSString dataUniqueId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)renderType;
- (void)setExt:;
- (void)setDataUniqueId:;
- (id)trackerCommonParams;
- (void)setTrackerCommonParams:;
- (id)dataUniqueId;
- (id)scheme;
- (void)setScheme:;
- (void)setScene:;
- (id)init;
- (id)scene;
- (void)setRenderType:;
- (void).cxx_destruct;
- (id)ext;
+ (id)JSONKeyPathsByPropertyKey;
@end
