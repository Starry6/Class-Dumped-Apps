@interface PLFileSystemPersistenceBatchItem : NSObject
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSMutableDictionary attributes;
- (void)persist;
- (void)setString:forKey:;
- (void)setUInt64:forKey:;
- (void)setData:forKey:;
- (void)setInt32:forKey:;
- (void)setAttributes:;
- (id)attributes;
- (id)initWithFileURL:;
- (void).cxx_destruct;
- (id)fileURL;
- (void)setUInt16:forKey:;
- (id)description;
- (void)setUUIDString:forKey:;
@end
