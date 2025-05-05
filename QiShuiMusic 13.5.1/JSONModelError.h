@interface JSONModelError : NSError
@property (nonatomic) NSHTTPURLResponse httpResponse;
@property (nonatomic) NSData responseData;
- (id)errorByPrependingKeyPathComponent:;
- (void)setResponseData:;
- (id)responseData;
- (id)httpResponse;
- (void).cxx_destruct;
- (void)setHttpResponse:;
+ (id)errorInputIsNil;
+ (id)errorBadJSON;
+ (id)errorBadResponse;
+ (id)errorInvalidDataWithMessage:;
+ (id)errorInvalidDataWithMissingKeys:;
+ (id)errorInvalidDataWithTypeMismatch:;
+ (id)errorModelIsInvalid;
@end
