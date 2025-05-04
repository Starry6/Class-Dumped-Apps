@interface AWEPOIBTMCheckInterceptor : NSObject
@property (nonatomic) NSArray checkNodeList;
@property (nonatomic) NSArray skipList;
@property (nonatomic) Q checkType;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:btmInfo:;
- (id)newTrackParamsWithEvent:oldParams:btmInfo:;
- (id)skipList;
- (id)checkNodeList;
- (void)setCheckNodeList:;
- (void)setSkipList:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)checkType;
- (void)setCheckType:;
@end
