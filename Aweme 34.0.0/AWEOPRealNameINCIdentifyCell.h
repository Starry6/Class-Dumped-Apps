@interface AWEOPRealNameINCIdentifyCell : UIView
@property (nonatomic) UILabel name;
@property (nonatomic) UILabel phone;
@property (nonatomic) UIImageView checkImage;
@property (nonatomic) UILabel identifyLabel;
- (id)identifyLabel;
- (id)checkImage;
- (void)updateWithName:phone:;
- (void)setCheckImage:;
- (void)setIdentifyLabel:;
- (id)init;
- (id)phone;
- (void)setPhone:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setupUI;
@end
