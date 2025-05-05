@interface IESLiveDynamicToastHandleManager : NSObject
@property (nonatomic) NSDictionary dynamicToastCache;
@property (nonatomic) NSArray dynamicToastFiles;
@property (nonatomic) NSArray dynamicToastLines;
@property (nonatomic) BOOL enableDynamicToast;
- (id)dynamicToastCache;
- (id)dynamicToastFiles;
- (id)dynamicToastLines;
- (BOOL)enableDynamicToast;
- (id)getDynamicToastWithFileName:andLine:;
- (void)setEnableDynamicToast:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
