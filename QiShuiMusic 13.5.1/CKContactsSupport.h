@interface CKContactsSupport : NSObject
@property (nonatomic) # CKCNContactStore;
@property (nonatomic) # CKCNContactFetchRequest;
@property (nonatomic) # CKCNPhoneNumber;
@property (nonatomic) # CKCNContact;
@property (nonatomic) # CKCNMutableContact;
- (Class)CKCNContactStore;
- (Class)CKCNContactFetchRequest;
- (Class)CKCNPhoneNumber;
- (Class)CKCNContact;
- (Class)CKCNMutableContact;
+ (id)sharedInstance;
@end
