@interface AWESolariaPortraitFeatureProducer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getStrFeature:extParams:;
- (float)getNumicFeature:extParams:;
- (id)getSeqFeature:extParams:;
- (id)getDictFeature:extParams:;
- (unsigned long long)p_getPortraitType:;
- (id)p_getOneFeature:extParams:;
- (id)groupName;
+ (id)sharedInstance;
@end
