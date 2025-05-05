@interface HTSLiveOpenStreamUrlEncrypt : IESLivePBBaseMessage
@property (nonatomic) NSString rtmpPullURL;
@property (nonatomic) NSString hlsPullURL;
@property (nonatomic) NSMutableDictionary flvPullURL;
@property (nonatomic) Q flvPullURL_Count;
@property (nonatomic) NSString streamData;
@property (nonatomic) NSMutableArray hlsArray;
@property (nonatomic) Q hlsArray_Count;
@property (nonatomic) NSMutableArray flvArray;
@property (nonatomic) Q flvArray_Count;
@property (nonatomic) NSMutableDictionary hlsPullURLMap;
@property (nonatomic) Q hlsPullURLMap_Count;
@property (nonatomic) NSMutableDictionary pullDatas;
@property (nonatomic) Q pullDatas_Count;
+ (id)descriptor;
@end
