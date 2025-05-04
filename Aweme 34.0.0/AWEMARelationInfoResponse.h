@interface AWEMARelationInfoResponse : AWEBaseApiModel
@property (nonatomic) NSNumber fromUserID;
@property (nonatomic) BOOL isFriend;
- (void)setIsFriend:;
- (void)setFromUserID:;
- (id)fromUserID;
- (void).cxx_destruct;
- (BOOL)isFriend;
+ (id)isFriendJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
