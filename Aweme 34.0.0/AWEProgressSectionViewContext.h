@interface AWEProgressSectionViewContext : NSObject
@property (nonatomic) @? sectionViewClickedBlock;
@property (nonatomic) @? getPlayTime;
@property (nonatomic) @? getLogExtra;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (void)setSectionViewClickedBlock:;
- (void)setGetPlayTime:;
- (void)setGetLogExtra:;
- (id)getPlayTime;
- (id)getLogExtra;
- (id)sectionViewClickedBlock;
- (void).cxx_destruct;
@end
