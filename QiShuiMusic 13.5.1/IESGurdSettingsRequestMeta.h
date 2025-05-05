@interface IESGurdSettingsRequestMeta : NSObject
@property (nonatomic) BOOL requestEnabled;
@property (nonatomic) BOOL pollingEnabled;
@property (nonatomic) BOOL frequenceControlEnable;
@property (nonatomic) NSArray accessKeysArray;
@property (nonatomic) NSArray requestInfosArray;
@property (nonatomic) NSDictionary pollingInfosDictionary;
@property (nonatomic) NSDictionary lazyResourceInfosDictionary;
- (void)setLazyResourceInfosDictionary:;
- (id)accessKeysArray;
- (BOOL)isFrequenceControlEnable;
- (BOOL)isPollingEnabled;
- (BOOL)isRequestEnabled;
- (id)lazyResourceInfosDictionary;
- (id)pollingInfosDictionary;
- (id)requestInfosArray;
- (void)setAccessKeysArray:;
- (void)setFrequenceControlEnable:;
- (void)setPollingEnabled:;
- (void)setPollingInfosDictionary:;
- (void)setRequestEnabled:;
- (void)setRequestInfosArray:;
- (void).cxx_destruct;
+ (id)metaWithDictionary:;
@end
