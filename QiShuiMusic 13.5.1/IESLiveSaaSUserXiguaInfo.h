@interface IESLiveSaaSUserXiguaInfo : MTLModel
@property (nonatomic) NSString userAuthInfo;
@property (nonatomic) NSNumber ugcPublishMediaId;
@property (nonatomic) NSNumber mediaId;
@property (nonatomic) NSString authorDesc;
@property (nonatomic) NSString descrption;
@property (nonatomic) BOOL userVerified;
@property (nonatomic) IESLiveSaaSUserXiguaExtendInfo userExtendInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authorDesc;
- (id)descrption;
- (id)ugcPublishMediaId;
- (id)userAuthInfo;
- (id)userExtendInfo;
- (void).cxx_destruct;
- (BOOL)userVerified;
- (id)mediaId;
+ (id)userExtendInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
