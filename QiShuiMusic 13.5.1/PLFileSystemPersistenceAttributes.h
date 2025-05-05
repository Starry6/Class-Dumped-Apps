@interface PLFileSystemPersistenceAttributes : NSObject
- (id)dataForKey:;
- (void)dealloc;
- (id)UUIDStringForKey:;
- (BOOL)getUInt64:forKey:;
- (id)stringForKey:;
- (BOOL)getInt32:forKey:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAttributes:unknownAttributes:;
- (BOOL)getUInt16:forKey:;
@end
