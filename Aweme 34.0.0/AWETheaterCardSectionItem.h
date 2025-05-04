@interface AWETheaterCardSectionItem : NSObject
@property (nonatomic) AWETheaterCardUIConfigModel cardUIConfig;
@property (nonatomic) q cardType;
@property (nonatomic) NSDictionary cradData;
@property (nonatomic) NSString annieXCardSchema;
@property (nonatomic) NSString annieXCardRawData;
@property (nonatomic) BOOL hasUpdateLayout;
@property (nonatomic) AWETheaterSectionModel sectionModel;
@property (nonatomic) AWETheaterMoreFeedSectionItem moreFeedSectionModel;
- (id)annieXCardRawData;
- (id)cardUIConfig;
- (id)annieXCardSchema;
- (void)setAnnieXCardSchema:;
- (void)setAnnieXCardRawData:;
- (void)setCradData:;
- (void)setCardUIConfig:;
- (void)setMoreFeedSectionModel:;
- (id)moreFeedSectionModel;
- (id)cradData;
- (id)cardAwemeModel;
- (BOOL)hasUpdateLayout;
- (void)setHasUpdateLayout:;
- (id)sectionModel;
- (void).cxx_destruct;
- (void)setSectionModel:;
- (long long)cardType;
- (void)setCardType:;
@end
