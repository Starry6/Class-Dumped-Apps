@interface AWEFeedRVSingleCardBaseElement : AWEBaseElement
@property (nonatomic) Q type;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEFeedRelatedVideoCardControlViewController container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onSelected;
- (void)unSelected;
- (void)setModel:;
- (id)container;
- (void)play;
- (unsigned long long)type;
- (id)model;
- (void)setType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)context;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
