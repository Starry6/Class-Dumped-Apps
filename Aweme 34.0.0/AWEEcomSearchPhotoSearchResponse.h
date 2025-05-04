@interface AWEEcomSearchPhotoSearchResponse : NSObject
@property (nonatomic) AWESearchEcommercePhotoSearchDataResponse firstSectionResp;
@property (nonatomic) AWESearchEcommercePhotoSearchDataResponse secondSectionResp;
@property (nonatomic) NSDictionary firstSectionRawData;
@property (nonatomic) NSDictionary secondSectionRawData;
@property (nonatomic) BOOL loadMore;
- (BOOL)isLoadMore;
- (void)setLoadMore:;
- (id)firstSectionResp;
- (void)setFirstSectionResp:;
- (id)secondSectionResp;
- (void)setSecondSectionResp:;
- (id)firstSectionRawData;
- (void)setFirstSectionRawData:;
- (id)secondSectionRawData;
- (void)setSecondSectionRawData:;
- (void).cxx_destruct;
@end
