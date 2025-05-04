@interface AWEECOMIMTemplateCardModelManager : NSObject
@property (nonatomic) IESForestKit cdnForestKit;
- (id)templateCardModleResourceDirectoryPath;
- (void)fetchCDNResourceAsyncWithJsonName:completion:;
- (void)prepareGeckoResource;
- (id)cdnForestKit;
- (void)setCdnForestKit:;
- (id)init;
- (void).cxx_destruct;
+ (id)templateCardCDNPrefix;
+ (id)templateCardChannel;
+ (id)templateCardModleGeckoChannels;
+ (id)sharedInstance;
@end
