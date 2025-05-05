@interface IESECRelationFansClubInfoResponse : MTLModel
@property (nonatomic) IESECRelationFansClubInfoModel fansClubInfo;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fansClubInfo;
- (void)setFansClubInfo:;
- (void)setStatusMsg:;
- (id)statusMsg;
- (void)setStatusCode:;
- (id)statusCode;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
