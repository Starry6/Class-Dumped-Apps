@interface AWEUserProfileAdVideoSlotModel : MTLModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber IDType;
@property (nonatomic) NSNumber adID;
@property (nonatomic) BOOL needInsert;
@property (nonatomic) BOOL canPostInInitialRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adID;
- (void)setAdID:;
- (void)setIDType:;
- (void)setNeedInsert:;
- (void)setCanPostInInitialRequest:;
- (id)IDType;
- (BOOL)needInsert;
- (BOOL)canPostInInitialRequest;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
