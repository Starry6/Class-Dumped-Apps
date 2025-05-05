@interface PNSLoggerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setLogWithFileName:funcName:tag:line:level:format:;
@end
