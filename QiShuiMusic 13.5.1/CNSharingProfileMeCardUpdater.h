@interface CNSharingProfileMeCardUpdater : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNContact imageContact;
@property (nonatomic) CNSharingProfileLogger logger;
@property (nonatomic) <CNSharingProfileMeCardUpdaterDelegate> delegate;
@property (nonatomic) CNMutableContact meContact;
- (void)setContactStore:;
- (id)logger;
- (void)setDelegate:;
- (id)meContact;
- (void)setLogger:;
- (id)delegate;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithMeContact:contactStore:;
- (id)alertControllerForMeCardUpdateWithImageContact:;
- (void)performSave;
- (id)imageContact;
- (void)setImageContact:;
@end
