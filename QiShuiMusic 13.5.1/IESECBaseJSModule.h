@interface IESECBaseJSModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logWithMessage:level:;
- (void)reportALog:message:tag:;
- (void)sendLogV3:params:;
- (id)getUserInfo;
- (id)getAppInfo;
+ (id)methodLookup;
+ (id)name;
@end
