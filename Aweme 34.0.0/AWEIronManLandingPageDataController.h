@interface AWEIronManLandingPageDataController : NSObject
@property (nonatomic) Q enterFrom;
@property (nonatomic) Q uiVersion;
- (void)setEnterFrom:;
- (unsigned long long)enterFrom;
- (void)getWithURLString:params:modelClass:completion:;
- (void)setUiVersion:;
- (unsigned long long)uiVersion;
- (void)trackRequestEventWithParams:URL:error:;
- (void)saveDataToDiskWithDict:;
- (id)init;
+ (void)clearStorage;
+ (id)getStorageKeyWithPlatKey:;
+ (id)loadDataToMemory;
+ (void)requestPageCallback;
@end
