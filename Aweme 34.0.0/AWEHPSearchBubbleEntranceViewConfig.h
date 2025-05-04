@interface AWEHPSearchBubbleEntranceViewConfig : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString link;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString authorId;
@property (nonatomic) NSDictionary logPb;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) NSInteger showStyle;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)iconUrl;
- (void)setIconUrl:;
- (int)showStyle;
- (void)setLogPb:;
- (id)logPb;
- (void)setShowStyle:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
- (id)itemId;
- (id)authorId;
- (void)setAuthorId:;
- (void)setItemId:;
@end
