@interface IMInternalPayloadUtilities : NSObject
+ (BOOL)writePayload:toURL:;
+ (BOOL)writeData:toURL:;
+ (BOOL)writeMessagePayloadToDisk:fileName:;
+ (BOOL)writeDataPayloadToDisk:fileName:;
+ (id)writeMessagePayloadToTemporaryDirectory:fileName:;
@end
