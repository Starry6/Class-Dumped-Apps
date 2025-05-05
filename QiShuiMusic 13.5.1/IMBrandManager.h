@interface IMBrandManager : NSObject
@property (nonatomic) BSUIBrandManager brandManager;
- (void).cxx_destruct;
- (id)_init;
- (void)brandWithURI:completion:;
- (id)brandManager;
- (void)setBrandManager:;
+ (id)sharedInstance;
@end
