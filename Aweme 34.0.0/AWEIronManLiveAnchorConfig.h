@interface AWEIronManLiveAnchorConfig : NSObject
@property (nonatomic) q operationType;
@property (nonatomic) BOOL needSnapshot;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIImage image;
- (void)setNeedSnapshot:;
- (BOOL)needSnapshot;
- (void)setOperationType:;
- (long long)operationType;
- (id)init;
- (id)image;
- (void)setImage:;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)title;
- (id)textColor;
- (void)setTitle:;
@end
