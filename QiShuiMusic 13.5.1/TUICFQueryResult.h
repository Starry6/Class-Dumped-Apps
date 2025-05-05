@interface TUICFQueryResult : NSObject
@property (nonatomic) BOOL allowCallForDestinationID;
@property (nonatomic) BOOL fromBlockList;
- (id)description;
- (BOOL)allowCallForDestinationID;
- (void)setAllowCallForDestinationID:;
- (BOOL)isFromBlockList;
- (void)setFromBlockList:;
@end
