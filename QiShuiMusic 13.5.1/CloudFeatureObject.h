@interface CloudFeatureObject : NSObject
@property (nonatomic) NSString featureID;
@property (nonatomic) q status;
@property (nonatomic) NSNumber value;
@property (nonatomic) NSString accessToken;
- (id)init;
- (id)accessToken;
- (id)initWithFeatureID:status:value:accessToken:;
- (id)initWithFeatureID:status:accessToken:;
- (id)featureID;
- (void).cxx_destruct;
- (id)initWithFeatureID:status:intValue:accessToken:;
- (id)value;
- (long long)status;
@end
