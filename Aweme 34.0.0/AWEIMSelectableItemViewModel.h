@interface AWEIMSelectableItemViewModel : NSObject
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWEURLModel avatarURL;
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString subtitleText;
@property (nonatomic) NSArray tagViewModels;
@property (nonatomic) BOOL enableSelect;
@property (nonatomic) NSDictionary businessInfo;
- (id)avatarURL;
- (id)businessInfo;
- (id)initWithAvatarURL:titleText:subtitleText:tagViewModels:isSelected:enableSelect:businessInfo:;
- (id)tagViewModels;
- (BOOL)enableSelect;
- (void)updateIsSelected:;
- (id)subtitleText;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (id)titleText;
- (void).cxx_destruct;
@end
