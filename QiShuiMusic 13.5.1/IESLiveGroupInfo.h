@interface IESLiveGroupInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger groupType;
@property (nonatomic) IESLiveGroupHeaderInfo groupHeaderInfo;
@property (nonatomic) BOOL hasGroupHeaderInfo;
@property (nonatomic) IESLiveWallBg groupWallBg;
@property (nonatomic) BOOL hasGroupWallBg;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString contentColor;
@property (nonatomic) NSMutableDictionary buryPoint;
@property (nonatomic) Q buryPoint_Count;
+ (id)descriptor;
@end
