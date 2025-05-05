@interface BDARToast : NSObject
@property (nonatomic) q tag;
- (void)hideToast:;
- (void)showToast:;
- (long long)tag;
- (id)init;
- (void)setTag:;
+ (void)showToast:;
+ (id)sharedInstance;
@end
