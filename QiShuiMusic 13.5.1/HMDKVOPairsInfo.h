@interface HMDKVOPairsInfo : NSObject
@property (nonatomic) NSObject HMDObservee;
@property (nonatomic) ^v HMDObserveePtr;
@property (nonatomic) # HMDObserveeClass;
@property (nonatomic) NSMutableArray pairList;
- (id)HMDObservee;
- (id)HMDObserveePtr;
- (Class)HMDObserveeClass;
- (id)initWithObservee:;
- (id)pairList;
- (void)dealloc;
- (void).cxx_destruct;
@end
