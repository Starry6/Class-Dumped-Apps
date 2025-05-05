@interface FaceLiveUtils : NSObject
+ (id)smashSdkVersion;
+ (id)buildFaceCompareSDKDataWithParams:;
+ (id)convertRawBufferToImage:imageName:cols:rows:bgra2rgba:saveImage:;
+ (id)convertRawBufferToImage:imageName:cols:rows:saveImage:;
+ (id)getResource:resName:;
+ (id)packData:newCryptType:;
+ (id)smashLiveModelName;
+ (id)sortedRandomArrayByArray:;
@end
