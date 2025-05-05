@interface HTSLiveResourceConfigure : IESLivePBBaseMessage
@property (nonatomic) q resourceId;
@property (nonatomic) HTSLiveBarrageConfigure barrageConf;
@property (nonatomic) BOOL hasBarrageConf;
@property (nonatomic) HTSLiveScreenBarConfigure screenBarConf;
@property (nonatomic) BOOL hasScreenBarConf;
+ (id)descriptor;
@end
