@interface PrivilegeInfo : IESLivePBBaseMessage
@property (nonatomic) q entityId;
@property (nonatomic) NSMutableArray itemListArray;
@property (nonatomic) Q itemListArray_Count;
@property (nonatomic) NSInteger paidLiveType;
@property (nonatomic) PrivilegeBaseInfo paidLiveInfo;
@property (nonatomic) BOOL hasPaidLiveInfo;
@property (nonatomic) NSString extra;
@property (nonatomic) PrivilegeUrl privilegeURL;
@property (nonatomic) BOOL hasPrivilegeURL;
@property (nonatomic) PaidLiveUIBaseConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (nonatomic) PaidLiveConfig entityConfig;
@property (nonatomic) BOOL hasEntityConfig;
+ (id)descriptor;
@end
