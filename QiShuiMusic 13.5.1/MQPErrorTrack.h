@interface MQPErrorTrack : NSObject
@property (nonatomic) NSString errorType;
@property (nonatomic) NSString errorCode;
@property (nonatomic) NSString errorDetail;
- (id)initWithError:code:description:;
- (id)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)description;
- (id)errorDetail;
- (void)setErrorDetail:;
- (id)errorType;
- (void)setErrorType:;
@end
