@interface IESIMSaaSLogServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logError:error:;
- (void)logOnlyError:;
- (void)p_logLevel:desc:error:;
- (id)init;
- (void)logError:;
- (void)logInfo:;
- (BOOL)usable;
- (void)logWarn:;
@end
