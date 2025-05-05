@interface NSCachedURLResponse : NSObject
@property (nonatomic) NSURLResponse response;
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) Q storagePolicy;
- (id)_cacheTime;
- (void)dealloc;
- (id)userInfo;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)response;
- (id)copyWithZone:;
- (id)initWithResponse:data:userInfo:storagePolicy:;
- (unsigned long long)storagePolicy;
- (id)initWithResponse:data:;
- (id)initWithResponse:dataArray:userInfo:storagePolicy:;
- (id)_initWithCFCachedURLResponse:;
- (id)dataArray;
- (id)_CFCachedURLResponse;
- (void)_deallocInternalCFCachedURLResponse;
- (void)_reestablishInternalCFCachedURLResponse:;
+ (BOOL)supportsSecureCoding;
@end
