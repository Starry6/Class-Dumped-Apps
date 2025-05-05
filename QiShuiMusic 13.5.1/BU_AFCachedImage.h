@interface BU_AFCachedImage : NSObject
@property (nonatomic) NSData image;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q totalBytes;
@property (nonatomic) NSDate lastAccessDate;
@property (nonatomic) Q currentMemoryUsage;
- (id)accessImage;
- (id)initWithImage:identifier:;
- (void)setCurrentMemoryUsage:;
- (unsigned long long)currentMemoryUsage;
- (id)identifier;
- (void)setImage:;
- (unsigned long long)totalBytes;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)image;
- (void)setTotalBytes:;
- (void)setLastAccessDate:;
- (id)lastAccessDate;
@end
