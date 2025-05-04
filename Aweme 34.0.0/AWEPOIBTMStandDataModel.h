@interface AWEPOIBTMStandDataModel : MTLModel
@property (nonatomic) NSArray bcmParam;
@property (nonatomic) NSDictionary btmGeneralParam;
@property (nonatomic) NSDictionary btmClientParam;
@property (nonatomic) NSDictionary btmServerParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bcmParam;
- (void)setBcmParam:;
- (id)btmGeneralParam;
- (void)setBtmGeneralParam:;
- (id)btmClientParam;
- (void)setBtmClientParam:;
- (id)btmServerParam;
- (void)setBtmServerParam:;
- (void).cxx_destruct;
+ (id)bcmParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
