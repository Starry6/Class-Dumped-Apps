@interface AWEPublishPrivacySettingChangeInfoImpl : NSObject
@property (nonatomic) Q oldPrivacyOption;
@property (nonatomic) Q newPrivacyOption;
@property (nonatomic) NSDictionary param;
@property (nonatomic) BOOL isTrackable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)newPrivacyOption;
- (BOOL)isTrackable;
- (unsigned long long)oldPrivacyOption;
- (void)setOldPrivacyOption:;
- (void)setNewPrivacyOption:;
- (void)setIsTrackable:;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
@end
