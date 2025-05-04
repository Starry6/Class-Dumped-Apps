@interface AWEGeneralActivityLiveReservationModel : AWEUserModel
@property (nonatomic) NSString dateID;
@property (nonatomic) NSString startTime;
@property (nonatomic) BOOL isReserve;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)dateID;
- (void)setDateID:;
- (BOOL)isReserve;
- (void)setIsReserve:;
- (void)setStartTime:;
- (void).cxx_destruct;
- (id)startTime;
+ (id)avatarThumbJSONTransformer;
+ (id)roomIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
