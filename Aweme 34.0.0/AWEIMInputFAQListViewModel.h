@interface AWEIMInputFAQListViewModel : NSObject
@property (nonatomic) AWEIMInputFAQModel model;
@property (nonatomic) q role;
@property (nonatomic) <AWEIMInputFAQListViewModelDelegate> delegate;
- (void)didSelectedEntity:inActionBar:;
- (void)setModel:;
- (id)delegate;
- (long long)role;
- (id)initWithModel:;
- (void)setRole:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
