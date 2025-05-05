@interface CNContactCardFieldSection : NSObject
@property (nonatomic) NSString sectionType;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString displayTitle;
- (id)sectionType;
- (id)items;
- (id)displayTitle;
- (void).cxx_destruct;
- (id)initWithSectionType:items:;
- (id)initWithSectionType:items:displayTitle:;
@end
