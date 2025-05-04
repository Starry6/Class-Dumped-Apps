@interface AWEProfileTabListRegistry : NSObject
@property (nonatomic) NSMutableDictionary type2ProviderDictionary;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (id)type2ProviderDictionary;
- (id)providerForType:;
- (void)registProvider:;
- (void)setType2ProviderDictionary:;
- (void).cxx_destruct;
@end
