@interface TTABaseRespModel : NSObject
@property (nonatomic) NSNumber ttaCreateTimeStamp;
@property (nonatomic) NSString message;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errcodeInData;
- (BOOL)isClientError;
- (BOOL)isOtherRespError;
- (BOOL)isRespSuccess;
- (void)setTtaCreateTimeStamp:;
- (id)ttaCreateTimeStamp;
- (id)errorDescription;
- (id)init;
- (id)toDictionary;
- (void)setMessage:;
- (long long)errorCode;
- (id)initWithDictionary:error:;
- (id)valueForUndefinedKey:;
- (void)setValue:forUndefinedKey:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isServerError;
+ (BOOL)propertyIsIgnored:;
+ (BOOL)propertyIsOptional:;
@end
