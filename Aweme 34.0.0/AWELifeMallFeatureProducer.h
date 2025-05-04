@interface AWELifeMallFeatureProducer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getStrFeature:extParams:;
- (float)getNumicFeature:extParams:;
- (id)getSeqFeature:extParams:;
- (id)getDictFeature:extParams:;
- (id)groupName;
+ (id)sharedInstance;
@end
