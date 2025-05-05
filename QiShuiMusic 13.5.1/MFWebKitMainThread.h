@interface MFWebKitMainThread : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_mainThreadPopulateDictForMimeType:;
- (int)dictValueForMimeType:;
+ (id)sharedInstance;
@end
