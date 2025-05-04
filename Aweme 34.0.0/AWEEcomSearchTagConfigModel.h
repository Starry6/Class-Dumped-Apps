@interface AWEEcomSearchTagConfigModel : MTLModel
@property (nonatomic) Q tagType;
@property (nonatomic) AWESearchTagIcon tagIcon;
@property (nonatomic) AWESearchTagText tagText;
@property (nonatomic) double hybridHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTagText:;
- (id)tagText;
- (id)tagIcon;
- (void)setTagIcon:;
- (double)hybridHeight;
- (void)setHybridHeight:;
- (unsigned long long)tagType;
- (void).cxx_destruct;
- (void)setTagType:;
@end
