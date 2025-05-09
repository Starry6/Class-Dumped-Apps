@interface AWEPaymentEventHandler : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) <AWEPaymentEventHandlerDelegate> delegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL receiveAllEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (double)currentPlayProgress;
- (id)arrayToJsonString:;
- (void)handlePayEvent:;
- (void)handleLoginEvent:;
- (void)setReceiveAllEvent:;
- (void)refreshMixFeedDataForMixID:;
- (BOOL)shouldForbidFixingContinuePlayIssues;
- (BOOL)shouldRespondsToEvent:responseModel:;
- (void)handleEvent:responseModel:;
- (BOOL)receiveAllEvent;
- (void)refreshPlayletFeedDataForPlayletID:targetEpisode:;
- (void)refreshLongVideoFeedDataWithModel:itemID:;
- (void)refreshCurrentAweme:uploadTrack:isIgnore302Error:;
- (void)setModel:;
- (id)delegate;
- (void)setIdentifier:;
- (id)initWithIdentifier:;
- (id)identifier;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)handlerIdentifier;
@end
