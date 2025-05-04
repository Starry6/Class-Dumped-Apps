@interface AWEGeneralWaterfallSkuAnchor : AWEGeneralWaterfallAnchor
@property (nonatomic) NSDictionary productInfo;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)didStartShowing;
- (void)singleTapped:;
- (id)p_getTrackParams;
- (id)getAnchorIconURLList;
- (id)getAnchorIconImage;
- (id)getAnchorText;
- (id)productInfo;
- (void).cxx_destruct;
- (void)setProductInfo:;
- (void)updateWithModel:;
+ (double)heightForModel:;
+ (id)parseExtraString:;
@end
