@interface QQApiResultObject : QQApiObject
@property (nonatomic) NSString error;
@property (nonatomic) NSString errorDescription;
@property (nonatomic) NSString extendInfo;
@property (nonatomic) NSDictionary otherInfo;
- (id)extendInfo;
- (void)setExtendInfo:;
- (void)setOtherInfo:;
- (id)errorDescription;
- (void)setError:;
- (id)error;
- (void)setErrorDescription:;
- (id)otherInfo;
@end
