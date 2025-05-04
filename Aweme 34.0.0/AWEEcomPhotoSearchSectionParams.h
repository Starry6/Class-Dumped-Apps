@interface AWEEcomPhotoSearchSectionParams : AWEBaseApiModel
@property (nonatomic) NSString channel;
@property (nonatomic) NSString sectionName;
@property (nonatomic) NSString searchId;
- (id)searchId;
- (void)setSearchId:;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
- (void)setSectionName:;
- (id)sectionName;
+ (id)JSONKeyPathsByPropertyKey;
@end
