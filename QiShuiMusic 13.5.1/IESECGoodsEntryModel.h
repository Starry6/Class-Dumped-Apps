@interface IESECGoodsEntryModel : MTLModel
@property (nonatomic) NSString entryText;
@property (nonatomic) NSString entryUrl;
@property (nonatomic) IESECURLModel entryIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entryIcon;
- (id)entryText;
- (id)entryUrl;
- (void)setEntryIcon:;
- (void)setEntryText:;
- (void)setEntryUrl:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
