@interface AWEClueStoreMediaDataController : NSObject
- (void)fetchMediaDataWithParamDict:completion:;
- (void)recordGuideShownWithStorageKey:;
- (BOOL)hasGuideShownWithStorageKey:;
@end
