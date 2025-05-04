@interface AWELivePreStreamBizStatusServiceImp : NSObject
@property (nonatomic) AWELivePreStreamBizStatusContext statusContext;
@property (nonatomic) NSHashTable hashTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hashTable;
- (void)setHashTable:;
- (void)registStatusContextReceiver:;
- (unsigned long long)currentBizStatus;
- (void)updateBizStatus:open:;
- (void)statusOptionDidChanged;
- (void)setupStatusContext;
- (void)setStatusContext:;
- (id)statusContext;
- (void)removeStatusContextReceiver:;
- (id)init;
- (void)prepareForReuse;
- (void).cxx_destruct;
@end
