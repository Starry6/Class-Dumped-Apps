@interface AWEHPTabStorageManager : NSObject
@property (nonatomic) MMKV mmkv;
- (void)setMmkv:;
- (id)mmkv;
- (id)getEditTabsModelWithUserID:;
- (BOOL)saveEditTabModel:userID:;
- (void)clearUserEditTabModelWithUserID:;
- (id)getResponseWithUserID:;
- (BOOL)saveResponse:userID:;
- (id)p_editTabModelStorageKeyWithUserID:;
- (id)p_responseStorageKeyWithUserID:;
- (void).cxx_destruct;
@end
