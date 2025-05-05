@interface IESSaaSTIMImplManager : NSObject
@property (nonatomic) NSDictionary protocolClassPairs;
- (Class)getClass:;
- (id)getImpl:;
- (void)initImplInfosIfNeeded;
- (void)lazilyInitImplInfos;
- (id)protocolClassPairs;
- (void)setProtocolClassPairs:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
