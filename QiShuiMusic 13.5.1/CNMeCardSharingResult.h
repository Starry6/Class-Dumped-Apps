@interface CNMeCardSharingResult : NSObject
@property (nonatomic) NSString givenName;
@property (nonatomic) NSString familyName;
@property (nonatomic) CNContactImage contactImage;
@property (nonatomic) BOOL didSaveImageToMeCard;
- (id)givenName;
- (id)familyName;
- (id)contactImage;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGivenName:familyName:contactImage:didSaveImageToMeCard:;
- (BOOL)didSaveImageToMeCard;
@end
