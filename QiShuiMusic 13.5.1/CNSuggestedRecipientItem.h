@interface CNSuggestedRecipientItem : NSObject
@property (nonatomic) CNComposeRecipient recipient;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableSet handles;
@property (nonatomic) BOOL isSelected;
- (void)loadHandles;
- (void)setTitle:;
- (unsigned long long)hash;
- (BOOL)isSelected;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (void)setIsSelected:;
- (id)handles;
- (void)setHandles:;
- (BOOL)isEqual:;
- (void)setRecipient:;
- (id)recipient;
- (id)initWithRecipient:;
- (BOOL)isSelectedForHandles:;
- (BOOL)shouldDeselectForHandles:;
+ (id)os_log;
@end
