@interface AWEIMPrivateChatManagementFilterCellModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q type;
- (id)initWithTitle:isSelected:type:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
