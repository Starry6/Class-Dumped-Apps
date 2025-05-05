@interface CNUICoreFamilyInfo : NSObject
@property (nonatomic) CNContact meContact;
@property (nonatomic) NSArray elements;
- (id)init;
- (id)elements;
- (id)meContact;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMeContact:elements:;
@end
