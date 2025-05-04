@interface AWESearchVideoGoodsHelper : NSObject
@property (nonatomic) BOOL videoEntranceEnable;
- (void)setVideoEntranceEnable:;
- (BOOL)videoEntranceEnable;
+ (id)sharedInstance;
@end
