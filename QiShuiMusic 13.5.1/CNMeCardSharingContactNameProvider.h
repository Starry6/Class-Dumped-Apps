@interface CNMeCardSharingContactNameProvider : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)givenName;
- (id)initWithContact:;
- (id)contact;
- (id)familyName;
- (id)middleName;
- (id)nickname;
- (void).cxx_destruct;
+ (id)descriptorForRequiredKeys;
@end
