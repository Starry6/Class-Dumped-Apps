@interface NSArchiver : NSCoder
@property (nonatomic) NSMutableData archiverData;
- (void)encodeObject:;
- (void)encodeValueOfObjCType:at:;
- (void)encodeValuesOfObjCTypes:;
- (void)dealloc;
- (void)encodeBytes:length:;
- (id)data;
- (void)encodeRootObject:;
- (long long)versionForClassName:;
- (void)encodeDataObject:;
- (void)encodeArrayOfObjCType:count:at:;
- (void)encodeConditionalObject:;
- (void)encodeClassName:intoClassName:;
- (id)classNameEncodedForTrueClassName:;
- (id)initForWritingWithMutableData:;
- (id)archiverData;
- (void)replaceObject:withObject:;
+ (id)archivedDataWithRootObject:;
+ (void)encodeClassName:intoClassName:;
+ (id)classNameEncodedForTrueClassName:;
+ (BOOL)archiveRootObject:toFile:;
@end
