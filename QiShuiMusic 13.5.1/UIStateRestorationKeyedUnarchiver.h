@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver
- (id)decodeObjectOfClasses:forKey:;
- (void)dealloc;
- (id)decodeObjectForKey:;
- (id)initForReadingWithData:defaultValues:requiresSecureCoding:;
- (id)decodeTopLevelObjectOfClasses:forKey:error:;
@end
