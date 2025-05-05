@interface WBSTrackingCapableThirdParty : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSArray firstParties;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)isEqual:;
- (id)firstParties;
- (id)initWithDomain:firstParties:;
@end
