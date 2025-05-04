@interface AWEFantaFeaturePTYProducer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)toNumber:;
- (id)toDictionary:;
- (id)getStrFeature:extParams:;
- (float)getNumicFeature:extParams:;
- (id)getSeqFeature:extParams:;
- (id)getDictFeature:extParams:;
- (id)groupName;
- (id)toString:;
+ (id)sharedInstance;
@end
