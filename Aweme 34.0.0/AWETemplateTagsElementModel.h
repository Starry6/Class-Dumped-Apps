@interface AWETemplateTagsElementModel : AWEBaseApiModel
@property (nonatomic) q elementType;
@property (nonatomic) AWETemplateTagsTextInfoModel textInfo;
@property (nonatomic) AWETemplateTagsMultiTextInfoModel multiTextInfo;
@property (nonatomic) AWETemplateTagsImageInfoModel imageInfo;
@property (nonatomic) AWETemplateTagsMultiImageInfoModel multiImageInfo;
@property (nonatomic) NSString eventID;
@property (nonatomic) NSString dataRef;
- (id)multiTextInfo;
- (void)setMultiTextInfo:;
- (id)multiImageInfo;
- (void)setMultiImageInfo:;
- (void)setDataRef:;
- (id)eventID;
- (void).cxx_destruct;
- (void)setEventID:;
- (long long)elementType;
- (void)setElementType:;
- (id)imageInfo;
- (void)setImageInfo:;
- (void)setTextInfo:;
- (id)textInfo;
- (id)dataRef;
+ (id)textInfoJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)multiTextInfoJSONTransformer;
+ (id)multiImageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
