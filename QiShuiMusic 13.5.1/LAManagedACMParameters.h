@interface LAManagedACMParameters : NSObject
@property (nonatomic) NSMutableData data;
@property (nonatomic) ^{?=I^vI} acmParameters;
@property (nonatomic) I count;
- (id)initWithACMParamType:bytes:length:description:;
- (void)_appendACMParameter:;
- (id)data;
- (id)acmParameters;
- (id)acmParameterByAppendingACMParameters:;
- (void).cxx_destruct;
- (id)description;
- (id)findACMParameterWithType:;
- (unsigned int)count;
- (id)copyWithZone:;
+ (id)acmParameterWithMaxContinuityAge:;
+ (id)acmParameterWithTimeOffset:;
+ (id)acmParameterWithUserId:;
+ (id)acmParameterSecureIntentSupport;
@end
