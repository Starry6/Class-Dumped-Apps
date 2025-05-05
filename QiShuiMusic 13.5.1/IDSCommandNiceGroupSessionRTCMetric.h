@interface IDSCommandNiceGroupSessionRTCMetric : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) S rtcType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) q command;
@property (nonatomic) BOOL success;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) q errorCode;
@property (nonatomic) q retryCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorDomain;
- (unsigned short)rtcType;
- (long long)errorCode;
- (BOOL)success;
- (long long)command;
- (long long)retryCount;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithCommand:success:errorDomain:errorCode:retryCount:;
@end
