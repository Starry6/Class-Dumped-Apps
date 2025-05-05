@interface IESLiveSaaSPBPrivilegeInfo : GPBMessage
@property (nonatomic) q entityId;
@property (nonatomic) NSMutableArray itemListArray;
@property (nonatomic) Q itemListArray_Count;
@property (nonatomic) NSInteger paidLiveType;
@property (nonatomic) IESLiveSaaSPBPrivilegeBaseInfo paidLiveInfo;
@property (nonatomic) BOOL hasPaidLiveInfo;
@property (nonatomic) NSString extra;
@property (nonatomic) IESLiveSaaSPBPrivilegeUrl privilegeURL;
@property (nonatomic) BOOL hasPrivilegeURL;
@property (nonatomic) IESLiveSaaSPBPaidLiveUIBaseConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (nonatomic) IESLiveSaaSPBPaidLiveConfig entityConfig;
@property (nonatomic) BOOL hasEntityConfig;
+ (id)descriptor;
@end
