@interface AWEPerfResourceCleanItem : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) Q size;
@property (nonatomic) NSDate lastAccessDate;
@property (nonatomic) NSDate creationDate;
- (void)setCreationDate:;
- (id)path;
- (id)creationDate;
- (unsigned long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setPath:;
- (id)lastAccessDate;
- (void)setLastAccessDate:;
@end
