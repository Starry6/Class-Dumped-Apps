@interface STStatusDomain : NSObject
@property (nonatomic) <STStatusDomainServerHandle> serverHandle;
@property (nonatomic) <STStatusDomainData> data;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serverHandle;
- (id)init;
- (void)dealloc;
- (id)data;
- (BOOL)isInvalidated;
- (id)initWithServerHandle:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeData:;
- (void)observeData:forDomain:withChangeContext:;
- (void)observeDataWithBlock:;
+ (unsigned long long)statusDomainName;
@end
