@interface AWEShareQRCodeHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)saveAlbumWithImage:withCompletion:;
+ (void)requestRoundQRCodeWithContext:completion:;
+ (void)requestSquareQRCodeWithContext:completion:;
+ (BOOL)shouldUseTikCodeWithType:;
+ (void)trackQRCodeImageRequestWithTimeCost:context:error:;
+ (void)removeQRCodeCacheForItemID:;
+ (void)trackQRCodeRequestWithTimeCost:context:error:;
+ (void)requestImageWithQRCodeUrlList:avatarList:completion:;
+ (void)requestRoundQRCodeImageURLWithContext:completion:;
+ (void)requestSquareQRCodeURLWithContext:completion:;
+ (id)contentViewWithContext:;
+ (void)requestQRCodeImageURLWithContext:completion:;
@end
