@interface BDTrackerMMap : NSObject
@property (nonatomic) NSInteger fd;
@property (nonatomic) BOOL mapped;
@property (nonatomic) ^v map;
@property (nonatomic) Q mapSize;
@property (nonatomic) NSString filePath;
- (void)mmapWithSize:;
- (void)munmap;
- (void)setMapped:;
- (int)fd;
- (id)filePath;
- (void)setFilePath:;
- (unsigned long long)mapSize;
- (void).cxx_destruct;
- (id)map;
- (id)initWithPath:;
- (void)setMap:;
- (BOOL)mapped;
- (void)setMapSize:;
- (void)setFd:;
@end
