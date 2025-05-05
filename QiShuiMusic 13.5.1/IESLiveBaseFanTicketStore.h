@interface IESLiveBaseFanTicketStore : NSObject
@property (nonatomic) <IESLiveInteractFanTicketDelegate> delegate;
@property (nonatomic) BOOL guestCanAcceptGift;
- (BOOL)guestCanAcceptGift;
- (id)initWithDelegete:DIContext:;
- (void)setGuestCanAcceptGift:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
