@interface AWETransformerCardTrackContext : NSObject
@property (nonatomic) NSString cardElementID;
@property (nonatomic) double elementCreatedCount;
@property (nonatomic) double viewCreatedCount;
@property (nonatomic) double cardLayoutCount;
@property (nonatomic) double cardUpdateLayoutCount;
@property (nonatomic) double cardElementRenderTs;
- (void)setViewCreatedCount:;
- (id)cardElementID;
- (double)elementCreatedCount;
- (double)viewCreatedCount;
- (double)cardLayoutCount;
- (void)setCardLayoutCount:;
- (void)setCardElementID:;
- (void)setElementCreatedCount:;
- (double)cardUpdateLayoutCount;
- (void)setCardUpdateLayoutCount:;
- (double)cardElementRenderTs;
- (void)setCardElementRenderTs:;
- (void).cxx_destruct;
@end
