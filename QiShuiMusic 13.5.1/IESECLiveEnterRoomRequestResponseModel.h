@interface IESECLiveEnterRoomRequestResponseModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray cartAnimations;
@property (nonatomic) IESECLiveEnterRoomAutoApplyCouponResponseModel applyCoupon;
@property (nonatomic) IESECLiveEnterRoomResponseRoomInfo roomInfo;
@property (nonatomic) NSString replaceRelatedInfo;
@property (nonatomic) NSDictionary redirectPathDict;
- (void)setApplyCoupon:;
- (id)applyCoupon;
- (id)cartAnimations;
- (id)redirectPathDict;
- (id)replaceRelatedInfo;
- (id)roomInfo;
- (void)setCartAnimations:;
- (void)setRedirectPathDict:;
- (void)setReplaceRelatedInfo:;
- (void)setRoomInfo:;
- (void).cxx_destruct;
+ (id)cartAnimationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
