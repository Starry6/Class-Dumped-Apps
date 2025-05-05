@interface AWEIMSharePoiRankMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString updateTime;
@property (nonatomic) NSString content;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSString rankCode;
@property (nonatomic) BOOL canSwitch;
- (BOOL)canSwitch;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)rankCode;
- (void)setCanSwitch:;
- (void)setRankCode:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)updateTime;
- (id)copyWithZone:;
- (void)setUpdateTime:;
- (id)cityCode;
- (void)setCityCode:;
- (id)coverURL;
- (void)setCoverURL:;
@end
