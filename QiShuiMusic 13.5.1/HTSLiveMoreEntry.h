@interface HTSLiveMoreEntry : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSMutableArray episodesArray;
@property (nonatomic) Q episodesArray_Count;
@property (nonatomic) NSMutableArray backgroundColorsArray;
@property (nonatomic) Q backgroundColorsArray_Count;
@property (nonatomic) q total;
@property (nonatomic) q extensionType;
@property (nonatomic) q displayType;
@property (nonatomic) GPBInt64Array episodeIdsArray;
@property (nonatomic) Q episodeIdsArray_Count;
@property (nonatomic) q batchSize;
@property (nonatomic) NSString secondTitle;
@property (nonatomic) NSMutableArray episodeIdsStrArray;
@property (nonatomic) Q episodeIdsStrArray_Count;
+ (id)descriptor;
@end
