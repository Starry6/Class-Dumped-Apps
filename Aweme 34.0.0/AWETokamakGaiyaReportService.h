@interface AWETokamakGaiyaReportService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)_aweLazyRegisterStaticLoad;
+ (void)setPreciseFuseToken:tokenType:payload:stage:;
+ (void)setPreciseFuseToken:tokenType:payload:stage:timeout:;
+ (BOOL)preCheckParamsToken:tokenType:payload:stage:timeout:;
+ (BOOL)enable;
+ (void)setEnable:;
@end
