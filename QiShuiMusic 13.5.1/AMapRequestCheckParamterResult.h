@interface AMapRequestCheckParamterResult : NSObject
@property (nonatomic) BOOL isConform;
@property (nonatomic) q errorCode;
- (BOOL)isConform;
- (void)setIsConform:;
- (long long)errorCode;
- (void)setErrorCode:;
+ (id)defaultCheckParamterResult;
@end
