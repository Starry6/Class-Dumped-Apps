@interface TTAUpdateUserProfileModel : TTADataRespModel
@property (nonatomic) NSString existed_name;
@property (nonatomic) NSString tip;
@property (nonatomic) NSString name;
@property (nonatomic) NSString error_description;
@property (nonatomic) NSDictionary bg_info;
@property (nonatomic) NSDictionary live_info;
@property (nonatomic) NSDictionary pgc_edit_info;
@property (nonatomic) NSDictionary common_edit_info;
@property (nonatomic) NSDictionary activity_tips;
@property (nonatomic) NSDictionary rp_edit_info;
@property (nonatomic) TTAUpdateUserExtraProfileItem attrs;
@property (nonatomic) TTAUserAuditInfoItem current_info;
@property (nonatomic) TTAPGCUserAuditInfoItem pgc_audit_info;
@property (nonatomic) TTAUserVerifiedAuditInfoItem verified_audit_info;
@property (nonatomic) TTACommonUserAuditInfoItem common_audit_info;
- (id)bg_info;
- (id)activity_tips;
- (id)common_audit_info;
- (id)common_edit_info;
- (id)current_info;
- (id)error_description;
- (id)existed_name;
- (id)live_info;
- (id)pgc_audit_info;
- (id)pgc_edit_info;
- (id)rp_edit_info;
- (void)setActivity_tips:;
- (void)setBg_info:;
- (void)setCommon_audit_info:;
- (void)setCommon_edit_info:;
- (void)setCurrent_info:;
- (void)setError_description:;
- (void)setExisted_name:;
- (void)setLive_info:;
- (void)setPgc_audit_info:;
- (void)setPgc_edit_info:;
- (void)setRp_edit_info:;
- (void)setVerified_audit_info:;
- (id)verified_audit_info;
- (void)setName:;
- (id)tip;
- (void)setTip:;
- (void).cxx_destruct;
- (id)name;
- (id)attrs;
- (void)setAttrs:;
+ (id)tta_modelCustomPropertyMapper;
@end
