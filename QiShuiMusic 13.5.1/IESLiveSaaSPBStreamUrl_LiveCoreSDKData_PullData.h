@interface IESLiveSaaSPBStreamUrl_LiveCoreSDKData_PullData : GPBMessage
@property (nonatomic) NSString streamData;
@property (nonatomic) IESLiveSaaSPBStreamUrl_LiveCoreSDKData_PullData_Options options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) q version;
@property (nonatomic) NSMutableDictionary hlsDataUnencrypted;
@property (nonatomic) Q hlsDataUnencrypted_Count;
@property (nonatomic) NSInteger kind;
@property (nonatomic) NSMutableArray hlsArray;
@property (nonatomic) Q hlsArray_Count;
@property (nonatomic) NSMutableArray flvArray;
@property (nonatomic) Q flvArray_Count;
@property (nonatomic) NSString codec;
+ (id)descriptor;
@end
