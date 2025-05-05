@interface HTSLiveStreamUrl_LiveCoreSDKData_PullData : IESLivePBBaseMessage
@property (nonatomic) NSString streamData;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) q version;
@property (nonatomic) NSMutableDictionary hlsDataUnencrypted;
@property (nonatomic) Q hlsDataUnencrypted_Count;
@property (nonatomic) NSInteger kind;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Extension extension;
@property (nonatomic) BOOL hasExtension;
@property (nonatomic) NSMutableArray hlsArray;
@property (nonatomic) Q hlsArray_Count;
@property (nonatomic) NSMutableArray flvArray;
@property (nonatomic) Q flvArray_Count;
@property (nonatomic) NSString codec;
@property (nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Display display;
@property (nonatomic) BOOL hasDisplay;
@property (nonatomic) NSString compensatoryData;
+ (id)descriptor;
@end
