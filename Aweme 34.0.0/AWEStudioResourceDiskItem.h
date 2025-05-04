@interface AWEStudioResourceDiskItem : NSObject
@property (nonatomic) NSString fileName;
@property (nonatomic) Q fileSize;
@property (nonatomic) NSDate lastAccessDate;
- (void)setFileSize:;
- (id)fileName;
- (unsigned long long)fileSize;
- (void).cxx_destruct;
- (void)setFileName:;
- (id)lastAccessDate;
- (void)setLastAccessDate:;
@end
