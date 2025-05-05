@interface VSUserAccountUpdateRequest : NSObject
@property (nonatomic) VSUserAccount userAccount;
@property (nonatomic) VSUserAccount updatedUserAccount;
@property (nonatomic) NSError updateError;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserAccount:;
- (id)userAccount;
- (void)setUserAccount:;
- (id)updatedUserAccount;
- (void)setUpdatedUserAccount:;
- (id)updateError;
- (void)setUpdateError:;
@end
