@interface HTSLiveItemShareMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveShareItemStyle itemStyle;
@property (nonatomic) BOOL hasItemStyle;
@property (nonatomic) HTSLiveText shareText;
@property (nonatomic) BOOL hasShareText;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) NSMutableDictionary trackingParams;
@property (nonatomic) Q trackingParams_Count;
+ (id)descriptor;
@end
