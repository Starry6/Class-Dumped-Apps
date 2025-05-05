@interface BU_IESGurdFileMD5Hash : NSObject
+ (id)hashOfFileAtPath:withComputationContext:error:;
+ (id)md5HashOfFileAtPath:error:;
@end
