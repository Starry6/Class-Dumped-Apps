@interface IESECWinComponentApi : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString passThroughAPI;
@property (nonatomic) NSString extraSchema;
@property (nonatomic) NSDictionary actionPramas;
- (void)setExtraSchema:;
- (id)actionPramas;
- (id)extraSchema;
- (void)fetchWindowComponentWithCompletion:;
- (id)passThroughAPI;
- (id)secUserID;
- (void)setActionPramas:;
- (void)setPassThroughAPI:;
- (void)setSecUserID:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
@end
