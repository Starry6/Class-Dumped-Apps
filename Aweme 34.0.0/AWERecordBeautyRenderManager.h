@interface AWERecordBeautyRenderManager : NSObject
@property (nonatomic) BOOL isRenderUpdateStatus;
- (BOOL)isRenderUpdateStatus;
- (void)setIsRenderUpdateStatus:;
+ (id)sharedInstance;
@end
