@interface BDUploadUtilTool : NSObject
@property (nonatomic) BOOL enableNativeLog;
- (BOOL)enableNativeLog;
- (void)enableNativeLogFunc:;
- (void)setEnableNativeLog:;
- (id)init;
+ (id)sharedInstance;
@end
