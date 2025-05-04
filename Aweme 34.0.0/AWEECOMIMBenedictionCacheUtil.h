@interface AWEECOMIMBenedictionCacheUtil : NSObject
+ (BOOL)needShowTitleBarBkgImg;
+ (BOOL)needShowCommonQuestionMsgBenediction;
+ (BOOL)isInAtmosphereTime;
+ (id)cacheKeyWithStr:;
+ (BOOL)needShowBenedictionMsg;
+ (void)storeBenedictionTccConfigWithTccDict:;
+ (id)easterImgUrl;
+ (double)easterImgWidth;
+ (double)easterImgHeight;
@end
