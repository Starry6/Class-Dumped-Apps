@interface RivalsRecommendResponse_GroupRivals : IESLivePBBaseMessage
@property (nonatomic) NSInteger groupRivalsType;
@property (nonatomic) NSMutableArray rivalsArray;
@property (nonatomic) Q rivalsArray_Count;
@property (nonatomic) NSString imprId;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString detailType;
@property (nonatomic) NSInteger recommendStatus;
@property (nonatomic) BOOL hasSelectButton;
@property (nonatomic) NSInteger recommendSelectType;
@property (nonatomic) HTSLiveText groupInfo;
@property (nonatomic) BOOL hasGroupInfo;
+ (id)descriptor;
@end
