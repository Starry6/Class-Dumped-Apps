@interface AWEPOIDetailCOIExtension : AWEPOIBaseExtension
@property (nonatomic) double COIHeaderFirstContentOffsetY;
@property (nonatomic) BOOL COIShowing;
@property (nonatomic) BOOL COIHeaderBeCover;
@property (nonatomic) double maxCOICount;
@property (nonatomic) NSString referString;
@property (nonatomic) Q cardDisplayStyle;
- (id)referString;
- (void)setReferString:;
- (void)pageDidScroll:;
- (void)initializeExtension;
- (void)setCOIHeaderFirstContentOffsetY:;
- (void)setCardDisplayStyle:;
- (double)maxCOICount;
- (unsigned long long)cardDisplayStyle;
- (double)COIHeaderFirstContentOffsetY;
- (BOOL)COIShowing;
- (void)setCOIShowing:;
- (id)getHeaderContainerView;
- (BOOL)COIHeaderBeCover;
- (void)setCOIHeaderBeCover:;
- (void)setMaxCOICount:;
- (void)dealloc;
- (void).cxx_destruct;
@end
