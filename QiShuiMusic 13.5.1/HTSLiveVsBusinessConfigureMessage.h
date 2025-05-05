@interface HTSLiveVsBusinessConfigureMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveBusinessConfigure businessConfigure;
@property (nonatomic) BOOL hasBusinessConfigure;
@property (nonatomic) BOOL allInfo;
@property (nonatomic) q scatterTime;
+ (id)descriptor;
@end
