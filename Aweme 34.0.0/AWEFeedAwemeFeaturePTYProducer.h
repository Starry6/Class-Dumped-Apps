@interface AWEFeedAwemeFeaturePTYProducer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getStrFeature:extParams:;
- (float)getNumicFeature:extParams:;
- (id)getSeqFeature:extParams:;
- (id)getDictFeature:extParams:;
- (id)getAwemeIDFromParams:;
- (id)getAwemeFeatures:strategyName:params:;
- (id)innerGetSeqFeature:strategyName:params:;
- (id)getAwemeOneFeature:strategyName:params:;
- (id)getFeature:extParams:;
- (id)valueToString:;
- (id)valueToNumber:;
- (id)valueToDictionary:;
- (id)valueToArray:;
- (id)getAwemeFeatures:aweme:typeList:strategyName:params:;
- (id)getAwemeIDListFormCurrentDataSourceWithRange:isGetPre:excludeCurrent:;
- (id)groupName;
+ (id)sharedInstance;
@end
