@interface BDInstallIDFA : NSObject
@property (nonatomic) NSString idfa;
- (id)idfa;
- (void)setIdfa:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
