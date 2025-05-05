@interface IESLiveVIPAfterLiveCardModel : IESLiveDynamicMTLModel
@property (nonatomic) q anchorId;
@property (nonatomic) BOOL isMember;
@property (nonatomic) q newRoomId;
@property (nonatomic) q oldRoomId;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)anchorId;
- (BOOL)isMember;
- (long long)newRoomId;
- (long long)oldRoomId;
- (void)setAnchorId:;
- (void)setIsMember:;
- (void)setNewRoomId:;
- (void)setOldRoomId:;
+ (id)shortTouchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
