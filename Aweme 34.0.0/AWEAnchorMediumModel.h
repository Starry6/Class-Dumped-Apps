@interface AWEAnchorMediumModel : AWEBaseApiModel
@property (nonatomic) NSString mediumID;
@property (nonatomic) NSString name;
@property (nonatomic) Q type;
@property (nonatomic) NSNumber playCount;
@property (nonatomic) AWEURLModel coverURL;
- (id)mediumID;
- (void)setMediumID:;
- (id)playCount;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setPlayCount:;
- (id)typeTitle;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
