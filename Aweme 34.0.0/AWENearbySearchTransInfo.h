@interface AWENearbySearchTransInfo : MTLModel
@property (nonatomic) NSString fromVideoID;
@property (nonatomic) NSString fromRoomID;
@property (nonatomic) NSString fromPOIID;
@property (nonatomic) NSString fromProductID;
@property (nonatomic) NSString fromPageID;
@property (nonatomic) NSString searchWordInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fromVideoID;
- (void)setFromVideoID:;
- (id)fromRoomID;
- (void)setFromRoomID:;
- (id)fromPOIID;
- (void)setFromPOIID:;
- (id)fromProductID;
- (void)setFromProductID:;
- (id)fromPageID;
- (void)setFromPageID:;
- (id)searchWordInfo;
- (void)setSearchWordInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
