@interface INCExtensionError : NSObject
@property (nonatomic) q errorCode;
@property (nonatomic) NSError underlyingError;
- (long long)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (void)setUnderlyingError:;
- (id)underlyingError;
- (id)initWithErrorCode:underlyingError:;
@end
