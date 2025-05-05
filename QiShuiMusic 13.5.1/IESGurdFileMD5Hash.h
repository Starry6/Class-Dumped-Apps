@interface IESGurdFileMD5Hash : NSObject
+ (id)hashOfFileAtPath:withComputationContext:error:;
+ (id)md5HashOfFileAtPath:error:;
+ (id)sha1HashOfFileAtPath:;
+ (id)sha512HashOfFileAtPath:;
@end
