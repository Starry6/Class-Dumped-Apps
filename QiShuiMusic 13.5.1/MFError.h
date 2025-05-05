@interface MFError : NSError
- (id)localizedDescription;
- (id)userInfo;
- (void).cxx_destruct;
- (void)setUserInfoObject:forKey:;
- (void)setLocalizedDescription:;
- (id)initWithDomain:code:userInfo:;
- (id)recoveryAttempter;
- (void)setShortDescription:;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (void)setMoreInfo:;
- (void)useGenericDescription:;
+ (id)errorWithDomain:code:localizedDescription:;
+ (id)errorWithDomain:code:localizedDescription:title:userInfo:;
+ (id)errorWithException:;
@end
