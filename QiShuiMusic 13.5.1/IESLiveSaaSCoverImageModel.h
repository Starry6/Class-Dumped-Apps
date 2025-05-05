@interface IESLiveSaaSCoverImageModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage roomCover;
@property (nonatomic) IESLiveSaaSImage roomCoverInAudit;
@property (nonatomic) q status;
@property (nonatomic) BOOL ctrlFlag;
@property (nonatomic) BOOL isAutoCover;
@property (nonatomic) IESLiveSaaSImage verticalCover;
@property (nonatomic) q verticalCoverStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)roomCoverInAuditJSONTransformer;
+ (id)roomCoverJSONTransformer;
+ (id)verticalCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
