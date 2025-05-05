@interface IESLiveInteractiveSEIParseResult : NSObject
@property (nonatomic) NSDictionary metaSEI;
@property (nonatomic) NSString oppositeUserID;
@property (nonatomic) BOOL disableOppositeMic;
@property (nonatomic) q ineractiveType;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) IESLiveInteractionCropData cropData;
- (id)metaSEI;
- (id)cropData;
- (BOOL)disableOppositeMic;
- (long long)ineractiveType;
- (id)oppositeUserID;
- (void)setCropData:;
- (void)setDisableOppositeMic:;
- (void)setIneractiveType:;
- (void)setMetaSEI:;
- (void)setOppositeUserID:;
- (void).cxx_destruct;
- (id)description;
- (void)setAppData:;
- (id)appData;
@end
