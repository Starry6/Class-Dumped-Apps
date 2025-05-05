@interface IESECLivePopRoomInfo : MTLModel
@property (nonatomic) NSNumber virtualRoomID;
@property (nonatomic) NSString addressID;
@property (nonatomic) NSNumber addressType;
@property (nonatomic) NSString addressStrategyType;
@property (nonatomic) q roomType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addressStrategyType;
- (long long)roomType;
- (void)setAddressStrategyType:;
- (void)setRoomType:;
- (void)setVirtualRoomID:;
- (id)virtualRoomID;
- (void).cxx_destruct;
- (id)addressType;
- (void)setAddressType:;
- (id)addressID;
- (void)setAddressID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
