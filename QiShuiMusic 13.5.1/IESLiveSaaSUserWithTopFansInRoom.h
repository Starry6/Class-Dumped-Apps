@interface IESLiveSaaSUserWithTopFansInRoom : BDDynamicMTLModel
@property (nonatomic) NSNumber fanTicket;
@property (nonatomic) IESLiveSaaSUserModel user;
@property (nonatomic) NSNumber rank;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fanTicket;
- (id)user;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
