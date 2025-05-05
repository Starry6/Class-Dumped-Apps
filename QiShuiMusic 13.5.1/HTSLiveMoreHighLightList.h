@interface HTSLiveMoreHighLightList : IESLivePBBaseMessage
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString desc;
@property (nonatomic) GPBInt64Array episodeIdsArray;
@property (nonatomic) Q episodeIdsArray_Count;
@property (nonatomic) NSMutableArray backgroundColorsArray;
@property (nonatomic) Q backgroundColorsArray_Count;
@property (nonatomic) NSString introductionURL;
@property (nonatomic) q extensionType;
@property (nonatomic) q normalEpisodeCount;
+ (id)descriptor;
@end
