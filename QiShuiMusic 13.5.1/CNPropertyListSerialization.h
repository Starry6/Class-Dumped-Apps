@interface CNPropertyListSerialization : NSObject
+ (id)mutableObjectWithData:error:;
+ (id)mutableObjectWithData:;
+ (id)objectWithData:error:;
+ (id)objectWithData:options:error:;
+ (id)objectWithData:;
+ (id)dataWithObject:;
+ (id)dataWithObject:error:;
@end
