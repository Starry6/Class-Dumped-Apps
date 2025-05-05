@interface EMDaemonInterfaceRequest : NSObject
@property (nonatomic) Q signpostID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)signpostID;
+ (id)signpostLog;
+ (id)systemScopeSignpostLog;
+ (unsigned long long)uniqueRequestID;
@end
