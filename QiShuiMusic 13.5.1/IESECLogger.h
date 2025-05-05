@interface IESECLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logWithLevel:tag:fileName:functionName:line:eventName:extra:;
- (void)logWithLevel:tag:fileName:functionName:line:message:;
+ (id)shared;
@end
