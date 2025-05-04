@interface AWELeftSideBarDynamicItemLinkTitleAppModel : MTLModel
@property (nonatomic) NSString linkMsg;
@property (nonatomic) BOOL needPoint;
@property (nonatomic) NSString linkSchema;
@property (nonatomic) NSString linkExtra;
@property (nonatomic) BOOL isClicked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)linkSchema;
- (void)setLinkSchema:;
- (id)linkExtra;
- (id)linkMsg;
- (void)setLinkMsg:;
- (BOOL)needPoint;
- (void)setNeedPoint:;
- (void)setLinkExtra:;
- (BOOL)isClicked;
- (void)setIsClicked:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
