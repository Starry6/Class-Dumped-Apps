@interface AWEPublishAssistantResponse : MTLModel
@property (nonatomic) BOOL hasDone;
@property (nonatomic) BOOL isHit;
@property (nonatomic) NSString bottomText;
@property (nonatomic) NSString popUpText;
@property (nonatomic) NSArray hitModelNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isHit;
- (void)setHasDone:;
- (void)setIsHit:;
- (BOOL)hasDone;
- (id)popUpText;
- (id)hitModelNames;
- (void)setPopUpText:;
- (void)setHitModelNames:;
- (void).cxx_destruct;
- (id)bottomText;
- (void)setBottomText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
