@interface NSPropertyListSerialization : NSObject
- (id)init;
+ (id)MCSafePropertyListWithData:options:format:error:;
+ (id)DMCSafePropertyListWithData:options:format:error:;
+ (id)allocWithZone:;
+ (id)dataWithPropertyList:format:options:error:;
+ (id)propertyListWithData:options:format:error:;
+ (BOOL)propertyList:isValidForFormat:;
+ (id)dataFromPropertyList:format:errorDescription:;
+ (id)propertyListFromData:mutabilityOption:format:errorDescription:;
+ (long long)writePropertyList:toStream:format:options:error:;
+ (id)propertyListWithStream:options:format:error:;
@end
