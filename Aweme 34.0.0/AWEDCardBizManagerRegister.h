@interface AWEDCardBizManagerRegister : NSObject
@property (nonatomic) NSMutableArray bizManagersArray;
- (id)bizManagersArray;
- (void)registerBizManager:;
- (void)setBizManagersArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
