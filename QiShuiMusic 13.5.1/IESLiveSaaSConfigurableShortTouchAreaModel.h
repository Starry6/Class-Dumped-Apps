@interface IESLiveSaaSConfigurableShortTouchAreaModel : BDDynamicMTLModel
@property (nonatomic) NSInteger type;
@property (nonatomic) I priority;
@property (nonatomic) q minWebcastSdkVersion;
@property (nonatomic) NSInteger shortTouchType;
@property (nonatomic) NSString containerPayload;
@property (nonatomic) IESLiveSaaSShortTouchInfoModel shortTouchInfo;
@property (nonatomic) IESLiveSaaSShortTouchBigCardModel bigCardModel;
@property (nonatomic) NSInteger loadType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bigCardModel;
- (id)containerPayload;
- (void)setBigCardModel:;
- (void)setContainerPayload:;
- (void)setLoadType:;
- (void).cxx_destruct;
- (int)loadType;
+ (id)bigCardModelJSONTransformer;
+ (id)shortTouchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
