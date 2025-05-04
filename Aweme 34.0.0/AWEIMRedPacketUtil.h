@interface AWEIMRedPacketUtil : NSObject
+ (id)douyinNumberFontWithSize:;
+ (id)douyinNumberFontWithSize:autoScale:;
+ (BOOL)isMangoAvailable;
+ (id)preprocessRPTitleWithPrefix:suffix:font:width:height:;
+ (long long)redPacketUserTypeWithMessage:;
+ (BOOL)isLowerDevice;
+ (long long)redPacketUserTypeWithInfo:isSendFromMe:;
+ (long long)getAmountCentFromStr:;
+ (void)gaussianBlurImage:radius:completion:;
+ (id)getGeckoImageNameFromCoverId:imageName:;
+ (double)getTextHeightWithFont:color:width:textContent:;
+ (BOOL)isDeductOpen;
+ (BOOL)isRewardOpen;
+ (BOOL)isVideoRpContainerOptimize;
@end
