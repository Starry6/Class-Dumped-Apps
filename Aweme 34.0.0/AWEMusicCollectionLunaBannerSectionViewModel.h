@interface AWEMusicCollectionLunaBannerSectionViewModel : NSObject
@property (nonatomic) AWEMusicLunaGuideBarView lunaBannerView;
@property (nonatomic) Q bannerStyle;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) @? bannerDidClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEventParams:;
- (id)lunaBannerView;
- (id)cellViewModelArray;
- (id)sectionFooterView;
- (void)setLunaBannerView:;
- (id)initWithStyle:params:;
- (void)updateContentWithTitle:subTitle:mainButtonTitle:;
- (void)setBannerDidClick:;
- (void)updateContentWithSongsCount:isCurrentUser:;
- (id)bannerDidClick;
- (double)sectionHeaderHeight;
- (id)init;
- (void)setBannerStyle:;
- (double)sectionFooterHeight;
- (unsigned long long)bannerStyle;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)sectionHeaderView;
- (id)eventParams;
@end
