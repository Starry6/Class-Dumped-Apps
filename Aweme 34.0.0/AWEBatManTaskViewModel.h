@interface AWEBatManTaskViewModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString buttonDoneTitle;
@property (nonatomic) q totalAddedTime;
@property (nonatomic) Q status;
@property (nonatomic) NSString extra;
@property (nonatomic) Q order;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)buttonDoneTitle;
- (long long)totalAddedTime;
- (void)setButtonDoneTitle:;
- (void)setTotalAddedTime:;
- (unsigned long long)order;
- (void)setStatus:;
- (id)icon;
- (id)extra;
- (void)setSubTitle:;
- (id)subTitle;
- (unsigned long long)type;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setOrder:;
- (unsigned long long)status;
- (id)title;
- (void)setTitle:;
- (id)buttonTitle;
- (void)setButtonTitle:;
@end
