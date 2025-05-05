@interface CNArchiver : NSObject
+ (id)os_log;
+ (id)encodeObject:error:;
+ (id)decodeObjectOfClass:data:error:;
+ (id)decodeObjectOfClass:associatedClasses:data:error:;
@end
