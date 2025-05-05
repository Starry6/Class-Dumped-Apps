@interface MPStoreContentReport : NSObject
@property (nonatomic) NSString displayText;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString contentID;
@property (nonatomic) q concernItemType;
@property (nonatomic) NSString commentText;
@property (nonatomic) NSString aucType;
@property (nonatomic) NSString concernTypeID;
- (id)userID;
- (id)contentID;
- (id)displayText;
- (void).cxx_destruct;
- (id)description;
- (void)setDisplayText:;
- (void)setUserID:;
- (id)copyWithZone:;
- (void)setContentID:;
- (long long)concernItemType;
- (void)setConcernItemType:;
- (id)commentText;
- (void)setCommentText:;
- (id)aucType;
- (void)setAucType:;
- (id)concernTypeID;
- (void)setConcernTypeID:;
@end
