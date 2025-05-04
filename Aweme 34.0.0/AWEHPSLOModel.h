@interface AWEHPSLOModel : NSObject
@property (nonatomic) q status;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorDesc;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) NSString errorExtra;
- (id)errorExtra;
- (void)setErrorExtra:;
- (void)p_updateWithNetorkServiceError:responseModel:;
- (void)p_updateStatus:errorCode:errorDomain:errorDesc:errorExtra:;
- (id)init;
- (BOOL)isValidWithError:;
- (void)setErrorCode:;
- (void)setStatus:;
- (long long)errorCode;
- (id)errorDesc;
- (id)description;
- (void).cxx_destruct;
- (long long)status;
- (void)setErrorDesc:;
- (id)errorDomain;
- (void)setErrorDomain:;
+ (id)modelWithNetorkError:responseModel:;
+ (id)modelWithStatus:error:;
+ (id)modelWithStatus:errorCode:errorDesc:;
+ (id)modelWithStatus:errorCode:errorDomain:errorDesc:errorExtra:;
@end
