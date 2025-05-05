@interface NSUnarchiver : NSCoder
@property (nonatomic) BOOL atEnd;
@property (nonatomic) I systemVersion;
- (void)dealloc;
- (id)data;
- (id)decodeBytesWithReturnedLength:;
- (void)decodeValuesOfObjCTypes:;
- (id)decodeDataObject;
- (long long)versionForClassName:;
- (id)decodeObject;
- (BOOL)isAtEnd;
- (unsigned int)systemVersion;
- (void)decodeValueOfObjCType:at:;
- (void)decodeArrayOfObjCType:count:at:;
- (void)replaceObject:withObject:;
- (void)decodeClassName:asClassName:;
- (id)classNameDecodedForArchiveClassName:;
- (id)initForReadingWithData:;
- (void)_setAllowedClasses:;
- (void)setObjectZone:;
- (id)objectZone;
+ (id)unarchiveObjectWithData:;
+ (id)unarchiveObjectWithFile:;
+ (void)decodeClassName:asClassName:;
+ (id)classNameDecodedForArchiveClassName:;
@end
