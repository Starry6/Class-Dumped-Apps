@interface MPSKeyedUnarchiver : NSKeyedUnarchiver
- (void)dealloc;
- (id)initWithDevice:;
- (id)mpsMTLDevice;
- (id)initForReadingFromData:device:error:;
- (id)initForReadingWithData:device:;
+ (id)unarchivedObjectOfClasses:fromData:device:error:;
+ (id)unarchivedObjectOfClass:fromData:device:error:;
+ (id)unarchiveObjectWithData:device:;
+ (id)unarchiveTopLevelObjectWithData:device:error:;
+ (id)unarchiveObjectWithFile:device:;
@end
