@interface IESLiveSaaSAppearance : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSAppearanceBubble headBubble;
@property (nonatomic) q upRightStatsDisplayType;
@property (nonatomic) IESLiveSaaSMoreEntrance entrance;
@property (nonatomic) NSArray toolbarListArray;
@property (nonatomic) q previewStyle;
@property (nonatomic) IESLiveSaaSImage coverGauss;
@property (nonatomic) NSArray contentTagsArray;
@property (nonatomic) IESLiveSaaSPreviewLabel previewLabel;
@property (nonatomic) IESLiveSaaSImage coverDynamicMask;
@property (nonatomic) IESLiveSaaSImage horizontalBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)coverDynamicMaskJSONTransformer;
+ (id)contentTagsArrayJSONTransformer;
+ (id)toolbarListArrayJSONTransformer;
+ (id)coverGaussJSONTransformer;
+ (id)entranceJSONTransformer;
+ (id)headBubbleJSONTransformer;
+ (id)horizontalBackgroundJSONTransformer;
+ (id)labelImageJSONTransformer;
+ (id)previewLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
