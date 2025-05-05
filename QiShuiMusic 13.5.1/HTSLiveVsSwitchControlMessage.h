@interface HTSLiveVsSwitchControlMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger switch_p;
@property (nonatomic) BOOL on;
@property (nonatomic) NSString displayText;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
