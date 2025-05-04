@interface AWEECOMIMChatListTopDynamicCardCommonFunctionImp : AWEECOMIMDynamicCardCommonFunctionImp
- (id)templateCardModleResourceDirectoryPath;
- (void)fetchCDNResourceAsyncWithJsonName:completion:;
- (id)remoteConfig;
+ (id)sharedInstance;
@end
