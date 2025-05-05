@interface CNUIFamilyMemberDowntimeContactItem : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL selected;
- (BOOL)selected;
- (id)contact;
- (void)setSelected:;
- (id)label;
- (void).cxx_destruct;
- (id)initWithContact:label:;
@end
