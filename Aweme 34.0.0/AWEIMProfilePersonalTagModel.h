@interface AWEIMProfilePersonalTagModel : NSObject
@property (nonatomic) Q tagType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString action;
@property (nonatomic) NSString darkImageUrl;
@property (nonatomic) NSString lightImageUrl;
@property (nonatomic) NSString trackerLinkType;
@property (nonatomic) NSString content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDarkImageUrl:;
- (id)darkImageUrl;
- (id)trackerLinkType;
- (void)setTrackerLinkType:;
- (id)lightImageUrl;
- (void)setLightImageUrl:;
- (unsigned long long)tagType;
- (id)content;
- (void)setAction:;
- (id)action;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTagType:;
+ (id)modelCustomPropertyMapper;
@end
