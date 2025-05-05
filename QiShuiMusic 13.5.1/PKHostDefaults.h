@interface PKHostDefaults : NSUserDefaults
@property (nonatomic) PKHostPlugIn plugin;
- (void)setObject:forKey:;
- (void)registerDefaults:;
- (BOOL)synchronize;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setPlugin:;
- (id)plugin;
- (id)initWithPlugIn:;
@end
