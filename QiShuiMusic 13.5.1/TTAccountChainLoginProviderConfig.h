@interface TTAccountChainLoginProviderConfig : NSObject
@property (nonatomic) NSString conflictSecUserId;
@property (nonatomic) Q timeout;
@property (nonatomic) NSArray providersAppId;
- (id)conflictSecUserId;
- (id)providersAppId;
- (void)setConflictSecUserId:;
- (void)setProvidersAppId:;
- (void)setTimeout:;
- (void).cxx_destruct;
- (unsigned long long)timeout;
@end
