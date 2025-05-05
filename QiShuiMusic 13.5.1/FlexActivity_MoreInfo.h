@interface FlexActivity_MoreInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger displayMode;
@property (nonatomic) FlexActivity_RegisteredUserGroup registeredUserGroup;
@property (nonatomic) BOOL hasRegisteredUserGroup;
@property (nonatomic) FlexActivity_RivalsGroup rivalsGroup;
@property (nonatomic) BOOL hasRivalsGroup;
@property (nonatomic) FlexActivity_MyPKRecordGroup myPkRecordGroup;
@property (nonatomic) BOOL hasMyPkRecordGroup;
@property (nonatomic) FlexActivity_ContentGroup contentGroup;
@property (nonatomic) BOOL hasContentGroup;
+ (id)descriptor;
@end
