@interface UMLog : NSObject
@property (nonatomic) Q type;
- (void)logMessage:;
- (void)setType:;
- (unsigned long long)type;
- (void)logPrivateFormat:;
- (void)logPublicFormat:;
+ (id)debug;
+ (id)standard;
+ (id)error;
+ (id)fault;
+ (id)info;
@end
