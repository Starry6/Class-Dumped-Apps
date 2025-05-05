@interface HTSLiveRelevantRecommendation : IESLivePBBaseMessage
@property (nonatomic) NSInteger relevantType;
@property (nonatomic) NSInteger bottomBarCategory;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString barTextPrefix;
@property (nonatomic) NSString barTextPostfix;
@property (nonatomic) HTSLiveRelevantRecommendation_HighLightInfo highLightInfo;
@property (nonatomic) BOOL hasHighLightInfo;
@property (nonatomic) HTSLiveRelevantRecommendation_EcomInfo ecomInfo;
@property (nonatomic) BOOL hasEcomInfo;
@property (nonatomic) HTSLiveRelevantRecommendation_VsInfo vsInfo;
@property (nonatomic) BOOL hasVsInfo;
@property (nonatomic) HTSLiveRelevantRecommendation_WhiteCategoryInfo whiteCategoryInfo;
@property (nonatomic) BOOL hasWhiteCategoryInfo;
+ (id)descriptor;
@end
