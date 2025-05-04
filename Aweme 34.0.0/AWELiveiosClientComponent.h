@interface AWELiveiosClientComponent : MTLModel
@property (nonatomic) NSArray fragmentsArray;
@property (nonatomic) NSArray elementsArray;
@property (nonatomic) NSArray landscapeLayoutArray;
@property (nonatomic) NSArray portraitLayoutArray;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) q templateId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elementsArray;
- (void)setElementsArray:;
- (id)fragmentsArray;
- (void)setFragmentsArray:;
- (id)landscapeLayoutArray;
- (void)setLandscapeLayoutArray:;
- (id)portraitLayoutArray;
- (void)setPortraitLayoutArray:;
- (void)setIsOpen:;
- (BOOL)isOpen;
- (void).cxx_destruct;
- (void)setTemplateId:;
- (long long)templateId;
+ (id)parseClientComponentFromOriginRoomModel:;
@end
