@interface IESLiveLinkmicLinkAudienceCreateParams : IESLiveLinkmicLinkAudienceParams
@property (nonatomic) Q scene;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) NSInteger uiLayout;
@property (nonatomic) Q initSource;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)initSource;
- (void)setInitSource:;
- (void)setUiLayout:;
- (void)setScene:;
- (unsigned long long)scene;
- (BOOL)isAuto;
- (void)setIsAuto:;
- (int)uiLayout;
@end
