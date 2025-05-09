@interface AWEProfileEditViewModel : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSArray avatarURL;
@property (nonatomic) UIImage videoIconImage;
@property (nonatomic) NSArray videoIconURL;
@property (nonatomic) NSArray videoMp4IconURL;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString alias;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSDate uniqueIdModifyTime;
@property (nonatomic) NSString gender;
@property (nonatomic) Q showGenderStrategy;
@property (nonatomic) NSString birthDate;
@property (nonatomic) NSString signature;
@property (nonatomic) NSString profileSignature;
@property (nonatomic) NSString liveTimeNoticeText;
@property (nonatomic) NSString avatarURI;
@property (nonatomic) NSString videoIconURI;
@property (nonatomic) q genderType;
@property (nonatomic) BOOL ifDefaultID;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString country;
@property (nonatomic) NSString province;
@property (nonatomic) NSString city;
@property (nonatomic) NSString district;
@property (nonatomic) NSString locationDisplayText;
@property (nonatomic) NSString schoolName;
@property (nonatomic) NSString schoolPoiId;
@property (nonatomic) NSString jobName;
@property (nonatomic) NSString collegeName;
@property (nonatomic) NSString enrollYear;
@property (nonatomic) Q educationType;
@property (nonatomic) Q schoolVisibleType;
@property (nonatomic) NSString twitterNameToShow;
@property (nonatomic) NSString insId;
@property (nonatomic) NSString youtubeChannelTitle;
@property (nonatomic) NSString youtubeChannelId;
@property (nonatomic) NSString googleAccount;
@property (nonatomic) NSString youtubeRefreshToken;
@property (nonatomic) AWEUserAvatarDecotationModel decorationModel;
@property (nonatomic) BOOL hideLocation;
@property (nonatomic) q birthdayHideLevel;
@property (nonatomic) BOOL useDefaultAvatar;
@property (nonatomic) BOOL useDefaultNickname;
@property (nonatomic) float completionPercent;
@property (nonatomic) NSString enterpriseVerifyInfo;
@property (nonatomic) NSString enterpriseBrand;
@property (nonatomic) NSString companyIosDownladLink;
@property (nonatomic) NSString companyAndroidDownladLink;
@property (nonatomic) AWEUserHometownModel hometown;
@property (nonatomic) BOOL hometownInvisible;
@property (nonatomic) NSString hometownDisplayText;
@property (nonatomic) AWEUserProfileWeightModel userProfileWeight;
@property (nonatomic) NSArray coverList;
@property (nonatomic) NSDictionary tipLabelDict;
@property (nonatomic) NSString avatarButtonChangeLabelText;
@property (nonatomic) AWECooperationItemModel cooperationModel;
@property (nonatomic) q headPictCertStatus;
@property (nonatomic) BOOL isUserLongVideoOfficialType;
@property (nonatomic) BOOL forbidCompanyEdit;
@property (nonatomic) AWECodeGenLandingSwitchEditInfoModel landingSwitchModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setSchoolName:;
- (void)setProvince:;
- (id)province;
- (id)coverList;
- (void)setCoverList:;
- (void)setBirthdayHideLevel:;
- (long long)birthdayHideLevel;
- (BOOL)hideLocation;
- (id)schoolPoiId;
- (id)uniqueIdModifyTime;
- (id)insId;
- (id)googleAccount;
- (id)youtubeChannelId;
- (id)youtubeChannelTitle;
- (id)collegeName;
- (id)enrollYear;
- (unsigned long long)showGenderStrategy;
- (id)decorationModel;
- (BOOL)forbidCompanyEdit;
- (void)setDecorationModel:;
- (unsigned long long)schoolVisibleType;
- (void)setHideLocation:;
- (void)setSchoolVisibleType:;
- (void)setShowGenderStrategy:;
- (id)enterpriseVerifyInfo;
- (void)setEnterpriseVerifyInfo:;
- (void)setForbidCompanyEdit:;
- (id)hometown;
- (id)avatarURI;
- (void)setAvatarURI:;
- (void)refreshWithUser:;
- (float)completionPercent;
- (void)setCompletionPercent:;
- (void)setProfileSignature:;
- (void)setUseDefaultAvatar:;
- (void)setUseDefaultNickname:;
- (id)profileSignature;
- (BOOL)useDefaultAvatar;
- (BOOL)useDefaultNickname;
- (void)setYoutubeChannelId:;
- (void)setInsId:;
- (id)twitterNameToShow;
- (void)setUniqueIdModifyTime:;
- (void)setSchoolPoiId:;
- (void)setCollegeName:;
- (void)setEnrollYear:;
- (unsigned long long)educationType;
- (void)setEducationType:;
- (void)setYoutubeChannelTitle:;
- (id)youtubeRefreshToken;
- (void)setYoutubeRefreshToken:;
- (void)setGoogleAccount:;
- (void)setHometown:;
- (BOOL)hometownInvisible;
- (void)setHometownInvisible:;
- (BOOL)isUserLongVideoOfficialType;
- (id)avatarButtonChangeLabelText;
- (id)tipLabelDict;
- (id)userProfileWeight;
- (void)setHeadPictCertStatus:;
- (void)getEnterpriseBrand:;
- (void)setCooperationModel:;
- (id)videoIconURL;
- (id)cooperationModel;
- (long long)headPictCertStatus;
- (id)landingSwitchModel;
- (void)setLandingSwitchModel:;
- (id)locationDisplayText;
- (id)liveTimeNoticeText;
- (void)setLiveTimeNoticeText:;
- (void)setVideoIconURL:;
- (void)setTwitterNameToShow:;
- (void)setIfDefaultID:;
- (void)refreshLocationDisplayText;
- (void)refreshHometownDisplayText;
- (void)setCompanyIosDownladLink:;
- (void)setCompanyAndroidDownladLink:;
- (void)setUserProfileWeight:;
- (id)getCoverListFromUser:;
- (void)setTipLabelDict:;
- (void)setIsUserLongVideoOfficialType:;
- (void)setEnterpriseBrand:;
- (void)setLocationDisplayText:;
- (void)setHometownDisplayText:;
- (id)videoIconImage;
- (void)setVideoIconImage:;
- (id)videoMp4IconURL;
- (void)setVideoMp4IconURL:;
- (id)videoIconURI;
- (void)setVideoIconURI:;
- (BOOL)ifDefaultID;
- (id)enterpriseBrand;
- (id)companyIosDownladLink;
- (id)companyAndroidDownladLink;
- (id)hometownDisplayText;
- (void)setAvatarButtonChangeLabelText:;
- (id)signature;
- (id)nickname;
- (void)setSignature:;
- (id)alias;
- (id)userID;
- (id)country;
- (void)setCountryCode:;
- (id)city;
- (id)uniqueID;
- (void)setGender:;
- (void)setUniqueID:;
- (id)jobName;
- (id)gender;
- (void).cxx_destruct;
- (void)setCity:;
- (id)countryCode;
- (void)setCountry:;
- (void)setAlias:;
- (void)setNickname:;
- (void)setUserID:;
- (void)setAvatarImage:;
- (id)avatarImage;
- (void)setJobName:;
- (long long)genderType;
- (void)setGenderType:;
- (id)birthDate;
- (void)setDistrict:;
- (id)district;
- (void)setBirthDate:;
- (id)schoolName;
@end
