@interface IESLiveSaaSPBReplayStreamUrl : GPBMessage
@property (nonatomic) NSMutableDictionary tlsPullURLMap;
@property (nonatomic) Q tlsPullURLMap_Count;
@property (nonatomic) NSMutableDictionary resolutionNameMap;
@property (nonatomic) Q resolutionNameMap_Count;
@property (nonatomic) NSString defaultResolutionKey;
@property (nonatomic) q playAlignOffset;
@property (nonatomic) NSMutableArray streamAddrListArray;
@property (nonatomic) Q streamAddrListArray_Count;
+ (id)descriptor;
@end
