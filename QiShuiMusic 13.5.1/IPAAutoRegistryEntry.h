@interface IPAAutoRegistryEntry : NSObject
@property (nonatomic) # autoSettingsClass;
@property (nonatomic) BOOL persistable;
- (void).cxx_destruct;
- (Class)autoSettingsClass;
- (void)setAutoSettingsClass:;
- (BOOL)persistable;
- (void)setPersistable:;
@end
