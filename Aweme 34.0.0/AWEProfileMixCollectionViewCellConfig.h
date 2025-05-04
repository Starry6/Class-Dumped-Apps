@interface AWEProfileMixCollectionViewCellConfig : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) AWEUserProfileEventCommonParamsHandler eventCommonParamsHandler;
@property (nonatomic) AWEListDataController playletDataController;
@property (nonatomic) AWEProfileMixDataManager dataManager;
@property (nonatomic) NSString userID;
@property (nonatomic) double padding;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) AWEProfileContext profileContext;
- (id)referString;
- (void)setReferString:;
- (BOOL)fromHome;
- (void)setFromHome:;
- (id)eventCommonParamsHandler;
- (void)setEventCommonParamsHandler:;
- (id)profileContext;
- (id)playletDataController;
- (void)setPlayletDataController:;
- (void)setProfileContext:;
- (id)userID;
- (double)padding;
- (id)dataManager;
- (void)setDataManager:;
- (void)setPadding:;
- (void).cxx_destruct;
- (void)setUserID:;
@end
