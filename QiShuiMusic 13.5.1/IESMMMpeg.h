@interface IESMMMpeg : NSObject
+ (BOOL)isByteVC1Video:;
+ (BOOL)convert2AVMetadataFormat:metadata:;
+ (BOOL)findAtom:hld:info:;
+ (id)getAVCCKeyFromAVAsset:;
+ (id)getAVCConfigFromAVAsset:;
+ (id)getFtypFromFile:;
+ (id)getProfileFromAVAsset:;
+ (id)getiOSProfileFromAVAsset:;
+ (id)getiOSProfileWithConfig:;
+ (BOOL)isH264Video:;
+ (BOOL)isMPEGFile:;
@end
