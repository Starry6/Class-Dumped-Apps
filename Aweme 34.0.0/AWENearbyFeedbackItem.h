@interface AWENearbyFeedbackItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) AWENearbyFeedbackItemDetail detailItem;
- (id)initWithTitle:iconImage:detail:;
- (id)iconImage;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)detailItem;
- (void)setDetailItem:;
@end
