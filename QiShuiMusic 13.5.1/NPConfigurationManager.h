@interface NPConfigurationManager : NSObject
@property (nonatomic) BOOL enablePreConnect;
- (BOOL)enablePreConnect;
- (void)setEnablePreConnect:;
- (id)init;
- (void)updateWithConfiguration:;
+ (id)sharedConfiguration;
@end
