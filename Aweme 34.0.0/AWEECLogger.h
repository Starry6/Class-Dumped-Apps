@interface AWEECLogger : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logWithLevel:logTage:fileName:functionName:line:format:;
@end
