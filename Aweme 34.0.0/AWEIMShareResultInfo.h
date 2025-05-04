@interface AWEIMShareResultInfo : NSObject
@property (nonatomic) Q result;
@property (nonatomic) NSArray selectList;
@property (nonatomic) NSArray sharedUIDList;
@property (nonatomic) NSArray sharedSecUIDList;
@property (nonatomic) NSArray sharedCIDList;
@property (nonatomic) NSDictionary extraInfo;
- (id)selectList;
- (void)setSelectList:;
- (void)setSharedUIDList:;
- (void)setSharedSecUIDList:;
- (void)setSharedCIDList:;
- (id)sharedCIDList;
- (id)sharedUIDList;
- (id)sharedSecUIDList;
- (void)setResult:;
- (void).cxx_destruct;
- (unsigned long long)result;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
