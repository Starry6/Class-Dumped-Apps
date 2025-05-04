@interface AWEIMSkylightPerformance : NSObject
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) double preRequestDuration;
@property (nonatomic) double requestDuration;
@property (nonatomic) double postRequestTik;
@property (nonatomic) double postRequestDuration;
@property (nonatomic) q errorCode;
- (BOOL)isFirstFrame;
- (void)setIsFirstFrame:;
- (double)preRequestDuration;
- (void)setPreRequestDuration:;
- (double)postRequestTik;
- (void)setPostRequestTik:;
- (double)postRequestDuration;
- (void)setPostRequestDuration:;
- (void)setErrorCode:;
- (long long)errorCode;
- (double)requestDuration;
- (void)setRequestDuration:;
@end
