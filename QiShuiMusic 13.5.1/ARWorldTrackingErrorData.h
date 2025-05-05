@interface ARWorldTrackingErrorData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) q errorCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)errorCode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setErrorCode:;
- (double)timestamp;
- (id)initWithTimestamp:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
