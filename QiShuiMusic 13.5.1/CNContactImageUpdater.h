@interface CNContactImageUpdater : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNMutableContact contact;
- (void)setContactStore:;
- (id)contact;
- (void).cxx_destruct;
- (id)contactStore;
- (BOOL)updateImageWithImageContact:setAsMe:;
- (void)updateContact:withImagePropertiesFromContact:;
- (id)initWithContact:contactStore:;
+ (id)log;
@end
