@interface AWEAdADXModel : MTLModel
@property (nonatomic) NSString ADXURL;
@property (nonatomic) NSString ADXName;
@property (nonatomic) BOOL labelCanClick;
@property (nonatomic) Q style;
@property (nonatomic) NSString bannerURL;
@property (nonatomic) AWEAdADXFrequenceControlModel frequenceControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ADXName;
- (void)setADXName:;
- (id)bannerURL;
- (void)setBannerURL:;
- (id)ADXURL;
- (void)setADXURL:;
- (BOOL)labelCanClick;
- (void)setLabelCanClick:;
- (id)frequenceControl;
- (void)setFrequenceControl:;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)frequenceControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
