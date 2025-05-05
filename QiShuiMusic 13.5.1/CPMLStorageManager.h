@interface CPMLStorageManager : NSObject
- (id)writeValue:withUIntPtr:withItemCount:;
- (id)writeValue:withIntPtr:withItemCount:;
- (id)writeValue:withDoublePtr:withItemCount:;
- (id)readValue:withUIntPtr:withItemCount:;
- (id)readValue:withIntPtr:withItemCount:;
- (id)readValue:withDoublePtr:withItemCount:;
@end
