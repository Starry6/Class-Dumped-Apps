@interface AWEECOMIMPaasClientManagerBridge : NSObject
@property (nonatomic) NSDictionary pigeonClientDict;
@property (nonatomic) NSDictionary imClientDict;
- (id)imClientDict;
- (id)getIMClientWithCustomBizID:;
- (void)setImClientDict:;
- (id)pigeonClientDict;
- (id)getPigeonClientWithCustomBizID:;
- (void)setPigeonClientDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
