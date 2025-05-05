@interface IESMMHash : NSObject
+ (id)getMD5withPath:;
+ (id)getMD5WithString:;
+ (id)getMetaCheckcodeWithString:;
+ (id)getMD5withURL:;
+ (BOOL)checkMetaWithCheckcode:string:;
@end
