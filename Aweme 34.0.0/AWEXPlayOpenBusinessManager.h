@interface AWEXPlayOpenBusinessManager : NSObject
+ (void)shareToImWithBatManBusinessModel:shareSchema:completion:;
+ (void)addToDesktopWithBatManBusinessModel:addDesktopSchema:completion:;
+ (void)queryBatManCollectWithBatManBusinessModel:completion:;
+ (void)updateBatManCollectWithBatManBusinessModel:state:completion:;
+ (void)shareToImWithPhoto:completion:;
@end
