@interface ABUPlistStorage : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) BOOL binaryFormat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateObjectsForKeys:WithBlock:;
- (id)initWithPath:binaryFormat:;
- (void)setBinaryFormat:;
- (id)filePath;
- (BOOL)removeAll;
- (BOOL)setObject:forKey:;
- (BOOL)save;
- (BOOL)binaryFormat;
- (id)data;
- (void)setFilePath:;
- (BOOL)removeObjectsForKeys:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setData:;
- (id)objectsForKeys:;
- (id)allObjects;
- (BOOL)hasObjectForKey:;
@end
