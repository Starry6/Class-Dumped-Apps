@interface IESLiveSaaSEpisodePreviewImage : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage previewUriUp;
@property (nonatomic) IESLiveSaaSImage previewUriDown;
@property (nonatomic) q previewType;
@property (nonatomic) NSString previewWordUp;
@property (nonatomic) NSString previewWordDown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)previewUriDownJSONTransformer;
+ (id)previewUriUpJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
