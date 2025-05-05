@interface FileHash : NSObject
+ (id)hashOfFileAtPath:withComputationContext:;
+ (id)md5HashOfFileAtPath:;
+ (id)sha1HashOfFileAtPath:;
+ (id)sha512HashOfFileAtPath:;
@end
