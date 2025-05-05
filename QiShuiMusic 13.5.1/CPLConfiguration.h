@interface CPLConfiguration : NSObject
- (id)valueForKey:;
- (void)_load;
- (void)_save;
- (double)_updateInterval;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (void)check;
- (id)initWithClientLibraryBaseURL:;
- (void)refetchFromDisk;
- (void)_setContents:;
+ (void)disableConfigurationFetching;
@end
