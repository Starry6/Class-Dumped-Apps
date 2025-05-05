@interface AWEIMMessageShareCellViewModel : NSObject
@property (nonatomic) <AWEIMShareModelProtocol> model;
@property (nonatomic) NSString title;
@property (nonatomic) NSString imageName;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q shareType;
- (id)model;
- (void)setModel:;
- (void)setImageName:;
- (id)imageName;
- (void)setTitle:;
- (BOOL)isSelected;
- (id)title;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)setShareType:;
- (unsigned long long)shareType;
@end
