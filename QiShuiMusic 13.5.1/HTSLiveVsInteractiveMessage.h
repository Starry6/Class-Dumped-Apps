@interface HTSLiveVsInteractiveMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
