@interface IESLiveSaaSPreviewExpose : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSPreviewGuide previewGuide;
@property (nonatomic) BOOL hasPreviewGuide;
@property (nonatomic) BOOL isPreviewUseWebsocket;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasPreviewGuide;
- (void)setHasPreviewGuide:;
+ (id)previewGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
