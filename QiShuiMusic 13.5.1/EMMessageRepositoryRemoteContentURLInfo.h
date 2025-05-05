@interface EMMessageRepositoryRemoteContentURLInfo : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) Q requestCount;
@property (nonatomic) NSDate lastSeen;
@property (nonatomic) NSDate lastRequested;
- (id)url;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)lastSeen;
- (unsigned long long)requestCount;
- (id)initWithURL:requestCount:lastSeen:lastRequested:;
- (void)_commonInitWithURL:requestCount:lastSeen:lastRequested:;
- (id)lastRequested;
+ (BOOL)supportsSecureCoding;
@end
