@interface AWEImageGearManager : NSObject
+ (id)getWebImageExceptedSizeWithType:;
+ (id)getWebImageSizeWithType:;
+ (id)getWebImageExceptedSizeWithType:baseWidth:;
+ (id)getWebImageExceptedSizeWithType:byBizTag:;
+ (double)getBaseWidth:;
+ (id)getWebImageSizeWithType:baseWidth:;
@end
