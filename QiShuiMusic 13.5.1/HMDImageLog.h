@interface HMDImageLog : NSObject
+ (id)binaryImagesLogStr;
+ (id)binaryImagesLogStrWithMustIncludeImagesNames:includePossibleJailbreakImage:;
+ (id)imageLogStringWithImageInfo:;
@end
