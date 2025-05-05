@interface CNVCardNameComponents : NSObject
@property (nonatomic) NSString formattedName;
@property (nonatomic) BOOL isCompany;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString suffix;
@property (nonatomic) NSString companyName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)firstName;
- (id)middleName;
- (id)lastName;
- (id)suffix;
- (id)title;
- (void).cxx_destruct;
- (id)formattedName;
- (id)companyName;
- (BOOL)isCompany;
+ (id)components;
+ (id)componentsWithFirstName:lastName:middleName:title:suffix:companyName:isCompany:;
@end
