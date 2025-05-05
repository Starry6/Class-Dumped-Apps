@interface PLCodec : NSObject
+ (unsigned int)_typeCodeFromString:;
+ (BOOL)isPlayaleFourCharCodeName:;
+ (id)H264fourCharCode;
+ (id)HEVCfourCharCode;
@end
