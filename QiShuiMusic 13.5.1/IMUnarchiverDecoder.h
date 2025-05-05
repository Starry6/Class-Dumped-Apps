@interface IMUnarchiverDecoder : NSObject
+ (id)_decodeEncodedData:ofClass:includesAllowlistedClasses:;
+ (id)decodeEncodedDataSecurely:ofClass:includesAllowlistedClasses:;
@end
