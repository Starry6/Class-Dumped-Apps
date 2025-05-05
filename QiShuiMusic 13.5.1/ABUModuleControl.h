@interface ABUModuleControl : NSObject
@property (nonatomic) NSDictionary dict;
@property (nonatomic) NSString sdkControl;
@property (nonatomic) NSDictionary moduleMap;
- (BOOL)getModuleControlValueForKey:;
- (BOOL)getSDKControlValueForKey:;
- (BOOL)moduleEnable:;
- (id)moduleMap;
- (id)sdkControl;
- (void)setModuleControl:;
- (void)setModuleMap:;
- (void)setSDKControl:;
- (void)setSdkControl:;
- (BOOL)getValueForKey:;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
+ (id)sharedInstance;
@end
