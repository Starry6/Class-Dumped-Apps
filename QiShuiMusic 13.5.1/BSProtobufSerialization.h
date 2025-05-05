@interface BSProtobufSerialization : NSObject
+ (id)buildSchemaForClass:builder:;
+ (id)decodeObjectOfClass:fromData:error:;
+ (id)encodeObject:error:;
@end
